/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:19:12 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/28 16:52:21 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

void Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my"
				" 7XL-double-cheese-triple-pickle-specialketchup"
				" burger.\nI really do!\n";
}

void Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs"
				" more money.\nYou didn't put"
				" enough bacon in my burger! If you did,"
				"I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout <<"I think I deserve to have some extra bacon"
				" for free.\nI've been coming for"
				" years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout<< "This is unacceptable! I want to speak to the manager now.\n";
}

int Harl::checkComment(std::string level, std::string levelEntered, void (Harl::*func)())
{
	bool a;

	a = (level == levelEntered);
	a ? (this->*func)() : (void)func;
	return (a);
}

void Harl::printError()
{
	std::cout<< "the comment is not valide!!\n";
}

void Harl::complain(std::string level)
{
	int a = 0;
	a += checkComment(level, "DEBUG", &Harl::debug);
	a += checkComment(level, "INFO", &Harl::info);
	a += checkComment(level, "WARNING", &Harl::warning);
	a += checkComment(level, "ERROR",  &Harl::error);
	(a == 0)? printError():(void)a;
}

Harl::~Harl()
{
}
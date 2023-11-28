/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:19:12 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/28 18:21:49 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

void Harl::debug(void)
{
	std::cout<<"[DEBUG]\nI love having extra bacon for my"
				" 7XL-double-cheese-triple-pickle-specialketchup"
				" burger.\nI really do!\n";
}

void Harl::info(void)
{
	std::cout<<"[INFO]\nI cannot believe adding extra bacon costs"
				" more money.\nYou didn't put"
				" enough bacon in my burger! If you did,"
				"I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout <<"[WARNING]\nI think I deserve to have some extra bacon"
				" for free.\nI've been coming for"
				" years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout<< "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::printMsg(int lvl)
{
	switch (lvl)
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void Harl::complain(std::string level)
{
	int lvl = NONE;
	lvl = (level == "DEBUG" ? DEBUG : lvl);
	lvl = (level == "INFO" ? INFO : lvl);
	lvl = (level == "WARNING" ? WARNING : lvl);
	lvl = (level == "ERROR" ? ERROR : lvl);
	printMsg(lvl);
}

Harl::~Harl()
{
}
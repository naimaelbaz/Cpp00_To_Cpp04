/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:01:48 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/16 10:42:33 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact :: Contact()
{
	
}

std::string Contact::getFirstName()
{
	return(firstName);
}

std::string Contact::getLastName()
{
	return(lastName);
}

std::string Contact::getNickName()
{
	return(nickName);
}

std::string Contact::getPhoneNumber()
{
	return(phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return(darkestSecret);
}

bool check_if_isEmpty(std::string str)
{
	std::string	tmp;
	size_t	begin;
	size_t	end;
	size_t	tab;

	begin = str.find_first_not_of(" ");
	end = str.find_last_not_of(" ");
	tab = str.find_first_of("\t");
	if (begin != std::string::npos && end != std::string::npos)
		tmp = str.substr(begin , end + 1);
	if (tmp.empty() || tab != std::string::npos)
	{
		std::cout <<"\033[0;31myou have empty field😵, try again!\033[0m\n";
		return(false);
	}
	return(true);
}

void Contact::setFirstName()
{
	do
	{
		std::cout <<"\033[0;34mfirst Name: \033[0m";
		std::getline(std::cin,firstName);
		if (std::cin.eof())
			std::exit(0);
} while (!check_if_isEmpty(firstName));
}
void Contact::setLastName()
{
	do
	{
		std::cout <<"\033[0;34mlast Name: \033[0m";
		std::getline(std::cin,lastName);
		if (std::cin.eof())
			std::exit(0);
	} while (!check_if_isEmpty(lastName));
}

void Contact::setNickName()
{
	do
	{
		std::cout <<"\033[0;34mnick Name: \033[0m";
		std::getline(std::cin,nickName);
		if (std::cin.eof())
			std::exit(0);
	} while (!check_if_isEmpty(nickName));
}

void Contact::setPhoneNumber()
{
	do
	{
		std::cout <<"\033[0;34mphone Number: \033[0m";
		std::getline(std::cin,phoneNumber);
		if (std::cin.eof())
			std::exit(0);
	} while (!check_if_isEmpty(phoneNumber));
}

void Contact::setDarkestSecret()
{
	do
	{
		std::cout <<"\033[0;34mdarkest Secret: \033[0m";
		std::getline(std::cin,darkestSecret);
		if (std::cin.eof())
			std::exit(0);
	} while (!check_if_isEmpty(darkestSecret));
}
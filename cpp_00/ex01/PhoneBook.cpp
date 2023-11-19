/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:58:52 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/18 11:00:07 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : i(0)
{

}

void PhoneBook::add()
{
	contact[i%8].setFirstName();
	contact[i%8].setLastName();
	contact[i%8].setNickName();
	contact[i%8].setPhoneNumber();
	contact[i%8].setDarkestSecret();
	i++;
}

bool check_if_isdigit(std::string d)
{
	std::size_t index = d.find_first_not_of("0123456789");
	if(index != std::string::npos || d.empty())
	{
		std::cout<<"\033[0;31mthe index is not digit😵,try again\033[0m\n";
		return(false);
	}
	return(true);
}

int is_validIndex(int n, int i)
{
	if (n >= i)
	{
		std::cout<<"\033[0;31minvalid index😵, try again\033[0m\n";
		return(0);
	}
	return(1);
}

int PhoneBook::search()
{
	if (i == 0)
	{
		std::cout<<"\033[0;31mPhone Booc is empty!\033[0m😶\n";
		return(1);
	}
	else
	{
		int c = 0;
		std::cout<<"\033[0;34m+----------+----------+----------+----------+\033[0m\n";
		std::cout<<"\033[0;34m|\033[0m"<<"\033[0;36m"<<std::setw(10)<<"index"<<"\033[0m";
		std::cout<<"\033[0;34m|\033[0m"<<"\033[0;36m"<<std::setw(10)<<"first name"<<"\033[0m";
		std::cout<<"\033[0;34m|\033[0m"<<"\033[0;36m"<<std::setw(10)<<"last name"<<"\033[0m";
		std::cout<<"\033[0;34m|\033[0m"<<"\033[0;36m"<<std::setw(10)<<"nick name"<<"\033[0m"<<"\033[0;34m|\033[0m\n";
		std::cout<<"\033[0;34m+----------+----------+----------+----------+\033[0m\n";
		while (c < i && c < 8)
		{
			std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<c;
			if (contact[c].getFirstName().length() > 10)
				std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<contact[c].getFirstName().substr(0, 9) + '.';
			else
				std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<contact[c].getFirstName();
			if (contact[c].getLastName().length() > 10)
				std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<contact[c].getLastName().substr(0, 9) + '.';
			else
				std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<contact[c].getLastName();
			if (contact[c].getNickName().length() > 10)
				std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<contact[c].getNickName().substr(0, 9) + '.'<<"\033[0;34m|\033[0m\n";
			else
				std::cout<<"\033[0;34m|\033[0m"<<std::setw(10)<<contact[c].getNickName()<<"\033[0;34m|\033[0m\n";
			std::cout<<"\033[0;34m+----------+----------+----------+----------+\033[0m\n";
			c++;
		}
		std::string d;
		do
		{
			std::cout <<"\033[0;32menter the index of a contact : \033[0m\n";
			std::getline(std::cin,d);
			if (std::cin.eof())
				std::exit(0);
		} while (!check_if_isdigit(d) || !is_validIndex(std::atoi(d.c_str()), i));
		int n = atoi(d.c_str());
		std::cout<<"\033[0;36mfirst name: \033[0m"<<contact[n].getFirstName()<<"\n";
		std::cout<<"\033[0;36mlast name: \033[0m"<<contact[n].getLastName()<<"\n";
		std::cout<<"\033[0;36mnick name: \033[0m"<<contact[n].getNickName()<<"\n";
		std::cout<<"\033[0;36mphone number: \033[0m"<<contact[n].getPhoneNumber()<<"\n";
		std::cout<<"\033[0;36mdarkest secret: \033[0m"<<contact[n].getDarkestSecret()<<"\n";
	}
	return(0);
}


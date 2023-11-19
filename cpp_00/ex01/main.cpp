/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:49:10 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/15 16:52:49 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook c1;
	std::string cmd;
	
	while(1)
	{
		std::cout <<"\033[1;33menter one of three commands (ADD,SEARCH,EXIT): \033[0m\n";
		std::getline(std::cin,cmd);
		if (std::cin.eof())
			std::exit(0);
		if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
		{
			if (cmd == "ADD")
				c1.add();
			else if (cmd == "SEARCH")
			{
				if(c1.search())
					continue;
			}
			else if(cmd == "EXIT")
				break;
		}
		else
			std::cout<<"\033[0;31minvalid input😵, try again!\033[0m\n";
	}
	return(0);
}
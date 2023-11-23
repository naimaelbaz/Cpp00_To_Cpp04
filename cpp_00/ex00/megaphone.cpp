/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:24:12 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/20 09:34:27 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	if(ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for (size_t j = 0; j < str.length(); j++)
				str[j] = toupper(str[j]);
			std::cout <<str;
		}
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout <<"\n";
}
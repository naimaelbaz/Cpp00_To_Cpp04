/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:06:08 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/28 16:06:10 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl h1;
	std::string comm;
	std::cout << "what's the comment harl make: \n";
	std::getline(std::cin, comm);
	h1.complain(comm);
	return 0;
}
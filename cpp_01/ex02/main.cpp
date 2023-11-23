/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:46:24 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/23 19:39:43 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string B = "HI THIS IS BRAIN";
	std::string *stringPTR = &B;
	std::string& stringREF = B;
	
	std::cout << &B << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << B << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}
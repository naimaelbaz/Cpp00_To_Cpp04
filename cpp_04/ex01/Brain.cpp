/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:06:34 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/17 13:57:46 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain Default Constructor Called\n";
}

Brain::Brain(const Brain& ob)
{
	std::cout << "Brain Copy Constructor Called\n";
	*this = ob;
}

Brain& Brain::operator=(const Brain& ob)
{
	std::cout << "Brain Copy Assignment Operator Called\n";
	if (this == &ob)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ob.ideas[i];
	return *this; 
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called\n";
}

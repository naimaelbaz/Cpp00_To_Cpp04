/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:16:22 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 11:19:42 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout<<"Animal Default Constructor Called\n";
}

Animal::Animal(const Animal& ob)
{
	std::cout<<"Animal Copy Constructor Called\n";
	*this = ob;
}

Animal& Animal::operator=(const Animal& ob)
{
	std::cout<<"Animal Copy Assignment Operator Called\n";
	if(this == &ob)
		return(*this);
	this->type = ob.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout<<"Animal Destructor Called\n";
}

void Animal::makeSound() const
{
	std::cout<<type<<" make sound ...\n";
}

std::string Animal::getType() const
{
	return(type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:30:17 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 11:30:32 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout<<"WrongAnimal Default Constructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& ob)
{
	std::cout<<"WrongAnimal Copy Constructor Called\n";
	*this = ob;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ob)
{
	std::cout<<"WrongAnimal Copy Assignment Operator Called\n";
	if(this == &ob)
		return(*this);
	this->type = ob.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal Destructor Called\n";
}

void WrongAnimal::makeSound() const
{
	std::cout<<type<<" make sound ...\n";
}

std::string WrongAnimal::getType() const
{
	return(type);
}
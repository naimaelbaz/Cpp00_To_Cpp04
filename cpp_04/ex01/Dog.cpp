/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:56:13 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/17 13:54:59 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout<<"Dog Default Constructor Called\n";
	this->type = "Dog";
	this->DogBrain = new Brain();
}

Dog::Dog(const Dog& ob)
{
	std::cout<<"Dog Copy Constructor Called\n";
	*this = ob;
}

Dog& Dog::operator=(const Dog& ob)
{
	std::cout<<"Dog Copy Assignment Operator Called\n";
	if (this == &ob)
		return (*this);
	Animal::operator=(ob);
	delete this->DogBrain;
	this->DogBrain = new Brain();
	*this->DogBrain = *ob.DogBrain;
	return(*this);
}

Dog::~Dog()
{
	delete this->DogBrain;
	std::cout<<"Dog Destructor Called\n";
}

void Dog::makeSound() const
{
	std::cout<<type<<" make sound Woof.Woof.Woof..\n";
}
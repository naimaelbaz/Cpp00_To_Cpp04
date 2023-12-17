/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:43:36 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/17 14:06:44 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout<<"Cat Default Constructor Called\n";
	type = "Cat";
	CatBrain = new Brain();
}

Cat::Cat(const Cat& ob)
{
	std::cout<<"Cat Copy Constructor Called\n";
	*this = ob;
}

Cat& Cat::operator=(const Cat& ob)
{
	std::cout<<"Cat Copy Assignment Operator Called\n";
	if (this == &ob)
		return (*this);
	Animal::operator=(ob);
	delete this->CatBrain;
	this->CatBrain = new Brain();
	*this->CatBrain = *ob.CatBrain;
	return(*this);
}

Cat::~Cat()
{
	delete CatBrain;
	std::cout<<"Cat Destructor Called\n";
}

void Cat::makeSound() const
{
	std::cout<<type<<" make sound Meow.Meow.Meow..\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:32:18 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 11:36:54 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout<<"WrongCat Default Constructor Called\n";
}

WrongCat::WrongCat(const WrongCat& ob)
{
	std::cout<<"WrongCat Copy Constructor Called\n";
	*this = ob;
}

WrongCat& WrongCat::operator=(const WrongCat& ob)
{
	std::cout<<"WrongCat Copy Assignment Operator Called\n";
	WrongAnimal::operator=(ob);
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat Destructor Called\n";
}

void WrongCat::makeSound() const
{
	std::cout<<type<<" make sound Meow.Meow.Meow..\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:04:36 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/15 19:07:58 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(std::string const& type) : AMateria(type)
{
}

Ice::Ice(const Ice& ob) : AMateria(ob)
{
}

Ice& Ice::operator=(const Ice& ob)
{
	if(this == &ob)
		return(*this);
	return(*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return(new Ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *\n";
}
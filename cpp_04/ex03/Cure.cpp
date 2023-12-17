/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:17:04 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/15 21:46:14 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(std::string const& type) : AMateria(type)
{
}

Cure::Cure(const Cure& ob) : AMateria(ob)
{
}

Cure& Cure::operator=(const Cure& ob)
{
	if(this == &ob)
		return(*this);
	return(*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return(new Cure);
}

void Cure::use(ICharacter& target)
{
	std::cout<<"* heals "<< target.getName() <<"'s wounds *\n";
}
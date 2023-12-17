/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:41:02 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/17 14:52:01 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& ob)
{
	*this = ob;
}

AMateria& AMateria::operator=(const AMateria& ob)
{
	if(this == &ob)
		return(*this);
	this->type = ob.type;
	return(*this);
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
	return(type);
}

void AMateria::use(ICharacter& target)
{
	std::cout<<"fooo " << target.getName() << std::endl;
}
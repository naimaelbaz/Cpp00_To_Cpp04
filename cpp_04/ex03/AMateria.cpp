/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:41:02 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/16 16:37:38 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

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
	std::cout<<"fooo " << target.getName() << std::endl;//ask
}
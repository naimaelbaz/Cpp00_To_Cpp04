/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:19:53 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/16 16:48:38 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->IMateriaSrc_inventory[i] = NULL;
	
}

MateriaSource::MateriaSource(const MateriaSource &ob)
{
	*this = ob;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ob)
{
	if (this == &ob)
		return(*this);
	for (int i = 0; i < 4; i++)
	{
		if(this->IMateriaSrc_inventory[i])
			delete this->IMateriaSrc_inventory[i];
		this->IMateriaSrc_inventory[i] = ob.IMateriaSrc_inventory[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if(this->IMateriaSrc_inventory[i])
			delete this->IMateriaSrc_inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->IMateriaSrc_inventory[i])
		{
			this->IMateriaSrc_inventory[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->IMateriaSrc_inventory[i] && this->IMateriaSrc_inventory[i]->getType() == type)
			return(this->IMateriaSrc_inventory[i]->clone());
	}
	return(0);
}

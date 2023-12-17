/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:29:36 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/16 16:49:16 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& ob)
{
	*this = ob;
}

Character& Character::operator=(const Character& ob)
{
	if(this == &ob)
		return(*this);
	for (int i = 0; i < 4; i++)
	{
		if(this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = ob.inventory[i]->clone();
	}
	return(*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if(this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const& Character::getName() const
{
	return(name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(!this->inventory[i])
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if(this->inventory[idx] && idx >= 0 && idx <= 3)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(this->inventory[idx] && idx >= 0 && idx <= 3)
	{
		this->inventory[idx]->use(target);
	}
}
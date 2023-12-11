/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:54:48 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/11 11:29:52 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<<"DiamondTrap Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
	std::cout<<"DiamondTrap parameterised constructor called\n";
	this->name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ob) : ClapTrap(ob)
{
	std::cout<<"DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ob)
{
	if(this == &ob)
		return(*this);
	ScavTrap::operator=(ob);
	return(*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout<<"DiamnodTrap name is "<<name<<", ClapTrap name is "<<ClapTrap::name<<"\n";
}
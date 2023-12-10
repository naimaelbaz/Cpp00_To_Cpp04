/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:20:38 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/09 11:54:33 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"ScavTrap Parameterised constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ob1)
{
	std::cout << "ScavTrap Copy constructor called\n";
	*this = ob1;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ob1)
{
	std::cout << "ScavTrap Copy assignment operator called\n";
	if(this == &ob1)
		return(*this);
	ClapTrap::operator=(ob1);
	return(*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout<<name<<" (ScavTrap) attacks! "<<target<<
				", It deals "<<AttackDamage<<
				" damage to the target.\n";
	}
	else 
		std::cout<< name <<" is out of energy or critically damaged🥱!\n";
}

void ScavTrap::guardGate()
{
	std::cout << name <<" is now in Gate keeper mode.\n";
}
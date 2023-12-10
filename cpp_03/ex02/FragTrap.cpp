/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:20:38 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/09 11:54:27 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"FragTrap Default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap Parameterised constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

FragTrap::FragTrap(const FragTrap& ob1)
{
	std::cout << "FragTrap Copy constructor called\n";
	*this = ob1;
}

FragTrap& FragTrap::operator=(const FragTrap& ob1)
{
	std::cout << "FragTrap Copy assignment operator called\n";
	if(this == &ob1)
		return(*this);
	ClapTrap::operator=(ob1);
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void FragTrap::attack(const std::string& target)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout<<name<<" (FragTrap) attacks! "<<target<<
				", It deals "<<AttackDamage<<
				" damage to the target.\n";
	}
	else 
		std::cout<< name <<" is out of energy or critically damaged🥱!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<"high fives ✋\n";
}
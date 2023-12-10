/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:07:28 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/09 10:28:33 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Parameterized constructor called\n";
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ob1)
{
	std::cout << "Copy constructor called\n";
	*this = ob1;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ob1)
{
	std::cout << "Copy assignment operator called\n";
	if(this == &ob1)
		return(*this);
	this->name = ob1.name;
	this->HitPoints = ob1.HitPoints;
	this->AttackDamage = ob1.AttackDamage;
	this->EnergyPoints = ob1.EnergyPoints;
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout<<name<<" attacks "<<target<<
				", causing "<<AttackDamage<<
				" points of damage!\n";
	}
	else 
		std::cout<< name <<" is out of energy or critically damaged🥱!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(HitPoints > 0)
	{
		(HitPoints -= amount) < 0 ? HitPoints = 0 : HitPoints;
		std::cout<< name << " takes damage🤕!!\n";
	}
	else
		std::cout<< name <<" is out of energy or critically damaged🥱!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		HitPoints += amount;
		std::cout<< name <<" initiates repairs and regains "<< amount<< " hit points😎\n";
	}
	else
		std::cout<< name <<" is out of energy or critically damaged🥱!\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:48:18 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/25 18:17:57 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& n) : name(n)
{
	weaponB = NULL;
}

void HumanB::setWeapon(Weapon& weap_b)
{
	weaponB = &weap_b;
}

void HumanB::attack()
{
	if (weaponB)
	{
		std::cout << name << " attacks with their " <<
			weaponB->getType() << "\n";
	}
	else
		std::cout << name <<" has no weapon!!\n";
}

HumanB::~HumanB()
{
}
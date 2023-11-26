/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:48:18 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/25 12:24:43 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon& wep_a, std::string n) : weaponA(wep_a) , name(n)
{
}

void HumanA::attack()
{
	std::cout << name <<" attacks with their "<<
				 weaponA.getType() << "\n";
}

HumanA::~HumanA()
{
}
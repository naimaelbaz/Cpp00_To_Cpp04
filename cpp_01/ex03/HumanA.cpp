/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:48:18 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/29 10:12:57 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& weap_A) : weaponA(weap_A) , name(n)
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
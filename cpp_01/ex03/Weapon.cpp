/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:54:45 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/25 18:14:16 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t) 
{
}

const std::string& Weapon::getType()
{
	return(type);
}

void Weapon::setType(std::string t)
{
	type = t;
}

Weapon::~Weapon()
{
}

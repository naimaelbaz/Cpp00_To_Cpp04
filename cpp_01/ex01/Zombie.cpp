/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:25:15 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/23 17:17:47 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "zombie " << name << " was deleted\n";
}

void Zombie::setName(std::string n)
{
	name = n;
}

void Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:25:15 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/25 14:50:51 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n)
{
}

Zombie::~Zombie()
{
	std::cout << "zombie " << name << " was deleted\n";
}

void Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
} 


Zombie* newZombie( std::string name )
{
	Zombie *zo = new Zombie(name);
	return(zo);
}

void randomChump( std::string name )
{
	Zombie zo(name);
	zo.announce();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:59 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/10 14:57:44 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap ob("hello");
	ClapTrap& ob1 = ob;
	// ClapTrap ob2("Player");
	// ScavTrap ob2("Player2");
	// FragTrap ob3("Player3");
	ob1.attack("target1");
	ob.attack("target2");
	// ob3.attack("target3");
	ob1.takeDamage(5);
	// ob2.takeDamage(26);
	// ob3.takeDamage(15);
	ob1.beRepaired(5);
	// ob2.beRepaired(10);
	// ob3.beRepaired(10);
	// ob2.guardGate();
	// ob3.highFivesGuys();
	// delete ob1;
}
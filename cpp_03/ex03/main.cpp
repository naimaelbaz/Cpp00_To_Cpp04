/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:59 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/10 20:10:55 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	ClapTrap ob1("Player");
	ScavTrap ob2("Player2");
	FragTrap ob3("Player3");
	DiamondTrap ob4("play2");

	ob1.attack("target1");
	ob2.attack("target2");
	ob3.attack("target3");
	ob4.attack("target3");

	ob1.takeDamage(5);
	ob2.takeDamage(26);
	ob3.takeDamage(90);
	ob4.takeDamage(5);

	ob1.beRepaired(5);
	ob2.beRepaired(10);
	ob3.beRepaired(28);
	ob4.beRepaired(1);

	ob2.guardGate();
	ob3.highFivesGuys();
	ob4.whoAmI();
}
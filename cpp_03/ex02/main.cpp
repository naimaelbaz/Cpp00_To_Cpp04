/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:59 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/10 18:25:38 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap ob1("Player");
	ScavTrap ob2("Player2");
	FragTrap ob3("Player3");

	ob1.attack("target1");
	ob2.attack("target2");
	ob3.attack("target3");

	ob1.takeDamage(5);
	ob2.takeDamage(26);
	ob3.takeDamage(15);

	ob1.beRepaired(5);
	ob2.beRepaired(10);
	ob3.beRepaired(10);

	ob2.guardGate();
	ob3.highFivesGuys();
}
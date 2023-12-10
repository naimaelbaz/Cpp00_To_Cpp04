/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:59 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/09 09:24:01 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ob1("player1");
	ob1.attack("target1");
	ob1.takeDamage(9);
	

	ClapTrap ob2("player2");
	ob2.attack("target2");
	ob2 = ob1;
	ob2.attack("target1");
	ob2.beRepaired(10);
}
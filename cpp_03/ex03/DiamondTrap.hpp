/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:48:17 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/11 10:04:21 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& ob);
	DiamondTrap& operator=(const DiamondTrap& ob);
	~DiamondTrap();

	void attack(const std::string& target);
	void whoAmI();
};

#endif
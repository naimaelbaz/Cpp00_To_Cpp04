/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:55:03 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/16 09:09:36 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(std::string const& type);
	Ice(const Ice& ob);
	Ice& operator=(const Ice& ob);
	~Ice(void);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
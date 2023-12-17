/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:03:56 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/15 19:08:34 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(std::string const& type);
	Cure(const Cure& ob);
	Cure& operator=(const Cure& ob);
	~Cure(void);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
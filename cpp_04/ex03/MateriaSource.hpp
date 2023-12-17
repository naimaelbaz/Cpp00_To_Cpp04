/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:19:53 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/16 08:57:02 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Character.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *IMateriaSrc_inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& ob);
	MateriaSource& operator=(const MateriaSource& ob);
	~MateriaSource();

	AMateria* createMateria(std::string const & type);
	void learnMateria(AMateria*);
};

#endif

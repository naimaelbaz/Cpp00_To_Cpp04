/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:24:39 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 14:59:42 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *CatBrain;
public:
	Cat(void);
	Cat(const Cat& ob);
	Cat& operator=(const Cat& ob);
	~Cat(void);

	void makeSound(void) const;
	Brain *getCatBeain(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:48:13 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 14:56:31 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string* ideas[100];
public:
	Brain(void);
	Brain(const Brain& ob);
	Brain& operator=(const Brain& ob);
	~Brain(void);

	// std::string* getIdeas(void) const;
	// void setIdeas(std::string *ideas);
};

#endif
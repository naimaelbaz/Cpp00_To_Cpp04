/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:58:05 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/17 14:10:44 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal meta;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout<<"--------------------------\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout<<"--------------------------\n";
	i->makeSound();
	j->makeSound();
	std::cout<<"--------------------------\n";
	delete j;
	delete i;
}
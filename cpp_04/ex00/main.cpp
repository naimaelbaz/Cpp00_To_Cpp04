/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:58:05 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/17 12:51:59 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout<<"-------------------------------\n";
	std::cout << ">>>>>>\t" << j->getType() << "\t<<<<<<" << std::endl;
	std::cout << ">>>>>>\t" << i->getType() << "\t<<<<<<" << std::endl;
	std::cout << ">>>>>>\t" << meta->getType() << "\t<<<<<<" << std::endl;
	std::cout<<"-------------------------------\n";
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout<<"-------------------------------\n";
	delete meta;
	delete j;
	delete i;

	//WrongAnimal
	std::cout<<"-------------------------------\n";
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout<<"-------------------------------\n";
	std::cout << ">>>>>>\t" << k->getType() << "\t<<<<<<" << std::endl;
	std::cout << ">>>>>>\t" << meta1->getType() << "\t<<<<<<" << std::endl;
	std::cout<<"-------------------------------\n";
	k->makeSound();
	meta1->makeSound();
	std::cout<<"-------------------------------\n";
	delete meta1;
	delete k;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:58:05 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 11:37:52 by nel-baz          ###   ########.fr       */
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


	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();
	// std::cout<<"-------------------------------\n";
	// std::cout << ">>>>>>\t" << i->getType() << "\t<<<<<<" << std::endl;
	// std::cout << ">>>>>>\t" << meta->getType() << "\t<<<<<<" << std::endl;
	// std::cout<<"-------------------------------\n";
	// i->makeSound();
	// meta->makeSound();
	// std::cout<<"-------------------------------\n";
	// delete meta;
	// delete i;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:58:05 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/12 15:41:31 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// void pop()
// {
// 	system("leaks Brain");
// }

int main()
{
	// atexit(pop);
	size_t size = 6;
	Animal *p[size];
	
	for (size_t i = 0; i < size/2; i++)
		p[i] = new Cat();
	std::cout<<"------------------------\n";
	for (size_t i = size/2; i < size; i++)
		p[i] = new Dog();
	
	std::cout<<"------------------------\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout<<p[i]->getType()<<"\n";
		p[i]->makeSound();
	}
	std::cout<<"------------------------\n";

	for (size_t i = 0; i < size; i++)
	{
		delete p[i];
	}

	return 0;
}
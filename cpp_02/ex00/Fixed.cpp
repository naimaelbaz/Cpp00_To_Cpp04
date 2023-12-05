/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:34:26 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/04 17:17:39 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedNumber(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &ob1)
{
	std::cout << "Copy constructor called\n";
	*this = ob1;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return FixedNumber;
}

void Fixed::setRawBits(int const raw)
{
	this->FixedNumber = raw;
}

Fixed& Fixed::operator=(const Fixed& ob1)
{
	std::cout << "Copy assignment operator called\n";
	if(this == &ob1)
		return(*this);
	this->FixedNumber = ob1.getRawBits();
	return(*this);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}
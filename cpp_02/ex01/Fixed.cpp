/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:34:26 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/05 09:09:07 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedNumber(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int IntegerNumber)
{
	std::cout << "Int constructor called\n";
	this->FixedNumber = IntegerNumber << FractionalBits;
}

Fixed::Fixed(const float FloatNumber)
{
	std::cout << "Float constructor called\n";
	this->FixedNumber = roundf(FloatNumber * (0b1 << FractionalBits));
}

Fixed::Fixed(const Fixed &ob1)
{
	std::cout << "Copy constructor called\n";
	*this = ob1;
}
int Fixed::getRawBits() const
{
	return FixedNumber;
}

void Fixed::setRawBits(int const raw)
{
	this->FixedNumber = raw;
}

float Fixed::toFloat() const
{
	float result = (float)this->FixedNumber / 256;
	return(result);
}

int Fixed::toInt() const
{
	int result = this->FixedNumber >> FractionalBits;
	return(result);
}
Fixed& Fixed::operator=(const Fixed& ob1)
{
	std::cout << "Copy assignment operator called\n";
	if(this == &ob1)
		return(*this);
	this->FixedNumber = ob1.getRawBits();
	return(*this);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& ob1)
{
	return (COUT << ob1.toFloat());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
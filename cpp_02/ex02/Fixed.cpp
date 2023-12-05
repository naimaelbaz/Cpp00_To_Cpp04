/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:34:26 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/05 10:06:27 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed() : FixedNumber(0)
{
}

Fixed::Fixed(const int IntegerNumber)
{
	this->FixedNumber = IntegerNumber << FractionalBits;
}

Fixed::Fixed(const float FloatNumber)
{
	this->FixedNumber = roundf(FloatNumber * (0b1 << FractionalBits));
}

Fixed::Fixed(const Fixed &ob1)
{
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
	if(this == &ob1)
		return(*this);
	this->FixedNumber = ob1.getRawBits();
	return(*this);
}

bool Fixed::operator>(const Fixed& ob1)
{
	return (this->FixedNumber > ob1.FixedNumber);
}

bool Fixed::operator<(const Fixed& ob1)
{
	return (this->FixedNumber < ob1.FixedNumber);
}

bool Fixed::operator>=(const Fixed& ob1)
{
	return (this->FixedNumber >= ob1.FixedNumber);
}

bool Fixed::operator<=(const Fixed& ob1)
{
	return (this->FixedNumber <= ob1.FixedNumber);
}

bool Fixed::operator==(const Fixed& ob1)
{
	return (this->FixedNumber == ob1.FixedNumber);
}

bool Fixed::operator!=(const Fixed& ob1)
{
	return (this->FixedNumber != ob1.FixedNumber);
}

Fixed& Fixed::operator+(const Fixed& ob1)
{
	Fixed result;
	
	result.FixedNumber = this->FixedNumber + ob1.FixedNumber;
	return(result);
}

Fixed& Fixed::operator-(const Fixed& ob1)
{
	Fixed result;
	
	result.FixedNumber = this->FixedNumber - ob1.FixedNumber;
	return(result);
}

Fixed& Fixed::operator*(const Fixed& ob1)
{
	Fixed result;
	
	result.FixedNumber = this->FixedNumber * ob1.FixedNumber;
	return(result);
}

Fixed& Fixed::operator/(const Fixed& ob1)
{
	Fixed result;
	
	result.FixedNumber = this->FixedNumber / ob1.FixedNumber;
	return(result);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& ob1)
{
	return (COUT << ob1.toFloat());
}

// int& Fixed::max()
// {
	
// }

Fixed::~Fixed()
{
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:30:44 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/05 09:29:42 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int FixedNumber;
	static const int FractionalBits;
public:
	Fixed();
	Fixed(const int IntegerNumber);
	Fixed(const float FloatNumber);
	Fixed(const Fixed &ob1);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	
	static int& max(Fixed& ob1, Fixed& ob2);
	static int& max(const Fixed& ob1, const Fixed& ob2);
	static int& min(Fixed& ob1, Fixed& ob2);
	static int& min(const Fixed& ob1, const Fixed& ob2);
	
	Fixed& operator=(const Fixed& ob1);
	bool operator>(const Fixed& ob1);
	bool operator<(const Fixed& ob1);
	bool operator>=(const Fixed& ob1);
	bool operator<=(const Fixed& ob1);
	bool operator==(const Fixed& ob1);
	bool operator!=(const Fixed& ob1);
	Fixed& operator+(const Fixed& ob1);
	Fixed& operator-(const Fixed& ob1);
	Fixed& operator*(const Fixed& ob1);
	Fixed& operator/(const Fixed& ob1);
	
	~Fixed();
};

std::ostream& operator<<(std::ostream& COUT, const Fixed& ob1);

#endif
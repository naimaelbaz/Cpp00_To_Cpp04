/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:30:44 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/03 17:14:16 by nel-baz          ###   ########.fr       */
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
	Fixed(const Fixed &ob1);
	int getRawBits( void ) const;
	void setRawBits( int const raw);
	Fixed& operator=(const Fixed& ob1);
	~Fixed();
};

#endif
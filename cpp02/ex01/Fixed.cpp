/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:06 by marcos            #+#    #+#             */
/*   Updated: 2022/05/03 13:27:26 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = copy.getRawBits();
}

Fixed::Fixed( const int value )
{
    std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->fractbits;
}

// To convert from floating-point to fixed-point, we follow this algorithm:
// Calculate x = floating_input * 2^(fractional_bits)  256
//Round x to the nearest whole number (e.g. round(x))
//store it in int value
//Now, if “N is left-shifted by 2” i.e N=N<<8 then N will become N=N*(2^8).
//Thus, N=22*(2^2)=88 which can be writen as 01011000.
Fixed::Fixed( const float value )
{
    std::cout << "Float constructor called" << std::endl;
	this->_value = (static_cast<int>(roundf(value * (1 << this->fractbits))));
}


Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;

}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->_value = fixed.getRawBits();
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(_value) / static_cast<float>(1 << this->fractbits));
}

int Fixed::toInt( void ) const
{
    return (static_cast<int>(_value / (1 << this->fractbits)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
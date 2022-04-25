/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:06 by marcos            #+#    #+#             */
/*   Updated: 2022/04/25 18:31:14 by msantos-         ###   ########.fr       */
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
	this->_value = fixed.getRawBits();
	return *this;
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

std::ostream &operator <<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
// COMPARISON OPERATORS
bool Fixed::operator < (const Fixed& fixed) const
{
    if(fixed._value < this->_value)
        return (false);
    else
        return (true);
}
bool Fixed::operator >= (const Fixed& fixed) const
{
    if(fixed._value >= this->_value)
        return (false);
    else
        return (true);
}

bool Fixed::operator <= (const Fixed& fixed) const
{
    if(fixed._value <= this->_value)
        return (false);
    else
        return (true);
}
bool Fixed::operator > (const Fixed& fixed) const
{
    if(fixed._value > this->_value)
        return (false);
    else
        return (true);
}
bool Fixed::operator == (const Fixed& fixed) const
{
    if(fixed._value == this->_value)
        return (true);
    else
        return (false);
}
bool Fixed::operator != (const Fixed& fixed) const
{
    if(fixed._value != this->_value)
        return (true);
    else
        return (false);
}
// ARITHMETIC OPERATORS

Fixed &Fixed::operator * (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed._value * this->_value;
    *retFixed = Fixed(val);
    return(*retFixed);
}

Fixed &Fixed::operator + (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed._value + this->_value;
    *retFixed = Fixed(val);
    return(*retFixed);
}
Fixed &Fixed::operator - (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed._value- this->_value;
    *retFixed = Fixed(val);
    return(*retFixed);
}
Fixed &Fixed::operator / (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed._value / this->_value;
    *retFixed = Fixed(val);
    return(*retFixed);
}

// INCREMENT/DECREMENT 

Fixed Fixed::operator++( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() + 1);
    return (pre);
}

Fixed &Fixed::operator++( void )
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() - 1);
    return (pre);
}

Fixed &Fixed::operator--( void )
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

 //min and max
const Fixed &Fixed::min(const Fixed &fixed, const Fixed &fixed2)
{
    if(fixed._value < fixed2._value)
        return(fixed);
    else
        return(fixed2);
}

Fixed &Fixed::min(Fixed &fixed,  Fixed &fixed2)
{
    if(fixed._value < fixed2._value)
        return(fixed);
    else
        return(fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed, const Fixed &fixed2)
{
    if(fixed._value > fixed2._value)
        return(fixed);
    else
        return(fixed2);
}

Fixed &Fixed::max(Fixed &fixed,  Fixed &fixed2)
{
    if(fixed._value > fixed2._value)
        return(fixed);
    else
        return(fixed2);
}
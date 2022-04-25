/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:06 by marcos            #+#    #+#             */
/*   Updated: 2022/04/25 20:11:27 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void )
{
    this->_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    this->_value = copy.getRawBits();
}

Fixed::Fixed( const int value )
{
	this->_value = value << this->fractbits;
}

Fixed::Fixed( const float value )
{
	this->_value = (static_cast<int>(roundf(value * (1 << this->fractbits))));
}


Fixed::~Fixed( void )
{

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

Fixed Fixed::operator * (const Fixed &fixed)
{
    Fixed retFixed;
    float val;
    val = fixed._value * this->_value;
    retFixed = Fixed(val);
    return(retFixed);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
    Fixed retFixed;
    float val;
    val = fixed._value + this->_value;
    retFixed = Fixed(val);
    return(retFixed);
}
Fixed Fixed::operator - (const Fixed &fixed)
{
    Fixed retFixed;
    float val;
    val = fixed._value- this->_value;
    retFixed = Fixed(val);
    return(retFixed);
}
Fixed Fixed::operator / (const Fixed &fixed)
{
    Fixed retFixed;
    float val;
    val = fixed._value / this->_value;
    retFixed = Fixed(val);
    return(retFixed);
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
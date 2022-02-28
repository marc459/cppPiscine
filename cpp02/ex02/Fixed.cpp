/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:06 by marcos            #+#    #+#             */
/*   Updated: 2022/02/28 16:12:01 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	this->_value = (int)(value * (1 << this->fractbits));
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
    std::cout << "h" << std::endl;
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
    return (float)(_value / (float)(1 << this->fractbits));
}

int Fixed::toInt( void ) const
{
    return (_value / (1 << this->fractbits));
}

std::ostream &operator <<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
// COMPARISON OPERATORS
bool Fixed::operator < (const Fixed& fixed) const
{
    if(fixed.toFloat() < this->toFloat())
        return (false);
    else
        return (true);
}
bool Fixed::operator >= (const Fixed& fixed) const
{
    if(fixed.toFloat() >= this->toFloat())
        return (false);
    else
        return (true);
}

bool Fixed::operator <= (const Fixed& fixed) const
{
    if(fixed.toFloat() <= this->toFloat())
        return (false);
    else
        return (true);
}
bool Fixed::operator > (const Fixed& fixed) const
{
    if(fixed.toFloat() > this->toFloat())
        return (false);
    else
        return (true);
}
bool Fixed::operator == (const Fixed& fixed) const
{
    if(fixed.toFloat() == this->toFloat())
        return (true);
    else
        return (false);
}
bool Fixed::operator != (const Fixed& fixed) const
{
    if(fixed.toFloat() != this->toFloat())
        return (true);
    else
        return (false);
}
// ARITHMETIC OPERATORS

Fixed &Fixed::operator * (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed.toFloat() * this->toFloat();
    *retFixed = Fixed(val);
    return(*retFixed);
}

Fixed &Fixed::operator + (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed.toFloat() + this->toFloat();
    *retFixed = Fixed(val);
    return(*retFixed);
}
Fixed &Fixed::operator - (const Fixed &fixed) const
{
    Fixed *retFixed;
    float val;
    val = fixed.toFloat() - this->toFloat();
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

 void Fixed::operator ++( void )
 {
     this->_value++;
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
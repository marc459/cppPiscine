/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:03 by marcos            #+#    #+#             */
/*   Updated: 2022/04/25 18:11:26 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
    private:
        int _value;
        static const int fractbits = 8;
    public:
        Fixed( void );
        Fixed(const int value );
        Fixed(const float value );
        Fixed(const Fixed&);
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
        Fixed& operator= (const Fixed& fraction);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        bool operator< (const Fixed& fraction) const;
        bool operator> (const Fixed& fraction) const;
        bool operator<= (const Fixed& fraction) const;
        bool operator>= (const Fixed& fraction) const;
        bool operator== (const Fixed& fraction) const;
        bool operator!= (const Fixed& fraction) const;
        Fixed   operator++( int );
        Fixed   &operator++( void );
        Fixed   operator--( int );
        Fixed   &operator--( void );
        
        Fixed& operator<< (const Fixed& fraction);
        Fixed &operator *(const Fixed &fixed) const;
        Fixed &operator +(const Fixed &fixed) const;
        Fixed &operator -(const Fixed &fixed) const;
        Fixed &operator /(const Fixed &fixed) const;
        

        static Fixed &min(Fixed &fixed,  Fixed &fixed2);
        static const Fixed &min(const Fixed &fixed, const Fixed &fixed2);
        static Fixed &max(Fixed &fixed,  Fixed &fixed2);
        static const Fixed &max(const Fixed &fixed, const Fixed &fixed2);
        
};

std::ostream &operator <<(std::ostream &out, const Fixed &fixe);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:03 by marcos            #+#    #+#             */
/*   Updated: 2022/05/03 12:49:02 by marcos           ###   ########.fr       */
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
        Fixed& operator<< (const Fixed& fraction);
        
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);


#endif
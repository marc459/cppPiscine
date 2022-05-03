/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:03 by marcos            #+#    #+#             */
/*   Updated: 2022/04/19 12:08:02 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
class Fixed{
    private:
        int _value;
        static const int fractbits = 8;
    public:
        Fixed( void );
        Fixed(const Fixed&);
        ~Fixed();
        Fixed& operator= (const Fixed& fraction);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};

#endif
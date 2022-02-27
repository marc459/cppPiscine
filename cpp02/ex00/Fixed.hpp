/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:01:03 by marcos            #+#    #+#             */
/*   Updated: 2022/02/25 14:29:00 by marcos           ###   ########.fr       */
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
        Fixed(const Fixed&);
        ~Fixed();
        Fixed& operator= (const Fixed& fraction);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};


#endif
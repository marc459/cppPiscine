/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:34:18 by marcos            #+#    #+#             */
/*   Updated: 2022/03/04 20:12:09 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog:public Animal{
    protected:

    public:
        Dog( void );
        ~Dog( void );
        Dog(const Dog &Dog);
        Dog &operator =( const Dog &dog );

        void makeSound( void ) const;
};
#endif
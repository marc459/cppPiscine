/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:34:18 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 18:03:47 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog:public Animal{
    private:
        Brain *brain;

    public:
        Dog( void );
        ~Dog( void );
        Dog(const Dog &Dog);
        Dog &operator =( const Dog &dog );

        void makeSound( void ) const;
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:35 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 18:03:42 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat:public Animal{
    private:
        Brain *brain;

    public:
        Cat( void );
        ~Cat( void );
        Cat(const Cat &Cat);
        Cat &operator =( const Cat &cat );

        void makeSound( void ) const;
};
#endif
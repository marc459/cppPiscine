/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:35 by marcos            #+#    #+#             */
/*   Updated: 2022/03/04 20:12:16 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat:public Animal{
    protected:

    public:
        Cat( void );
        ~Cat( void );
        Cat(const Cat &Cat);
        Cat &operator =( const Cat &cat );

        void makeSound( void ) const;
};
#endif
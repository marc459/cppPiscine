/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:35 by marcos            #+#    #+#             */
/*   Updated: 2022/05/17 15:43:20 by msantos-         ###   ########.fr       */
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
        Brain	*getBrain(void) const;
		void	setBrain(Brain *brain);
};
#endif
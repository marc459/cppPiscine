/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:35 by marcos            #+#    #+#             */
/*   Updated: 2022/03/04 20:12:16 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat:public WrongAnimal{
    protected:

    public:
        WrongCat( void );
        ~WrongCat( void );
        WrongCat(const WrongCat &WrongCat);
        WrongCat &operator =( const WrongCat &WrongCat );

        void makeSound( void ) const;
};
#endif
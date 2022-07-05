/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:56:50 by marcos            #+#    #+#             */
/*   Updated: 2022/07/05 19:10:38 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
#define ICE_HPP

class Ice: public AMateria
{
    public:
        Ice( void );
        Ice(const Ice &copy);
        ~Ice( void );
        Ice &operator =( const Ice &ice );
        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:56:50 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 22:37:28 by marcos           ###   ########.fr       */
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
    
};
#endif
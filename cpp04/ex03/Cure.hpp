/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:44:51 by marcos            #+#    #+#             */
/*   Updated: 2022/03/07 13:50:32 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_HPP
#define CURE_HPP

class Cure: public AMateria
{
    public:
        Cure( void );
        Cure(const Cure &copy);
        ~Cure( void );
        Cure &operator =( const Cure &cure );
        AMateria* clone() const;
        void use(ICharacter& target);
    
};
#endif
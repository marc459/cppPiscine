/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:05:24 by marcos            #+#    #+#             */
/*   Updated: 2022/07/07 18:52:11 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *inventory[4];
        int nmaterias;
    public:
        MateriaSource( void );
        ~MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator =( const MateriaSource &materiasource );
        

        
        void learnMateria(AMateria* amateria);
        AMateria* createMateria(std::string const & type);
};

#endif
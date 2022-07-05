/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:07:21 by marcos            #+#    #+#             */
/*   Updated: 2022/07/05 21:48:26 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{

}

MateriaSource::~MateriaSource( void )
{

}
MateriaSource::MateriaSource(const MateriaSource &copy)
{


}
MateriaSource &MateriaSource::operator =( const MateriaSource &materiasource )
{


}

void MateriaSource::learnMateria(AMateria *amateria)
{
    if (amateria->getType() == "ice")
		this->ice = true;
	else if (amateria->getType() == "cure")
		this->cure = true;
	delete amateria;

}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    if(type == "ice")
        return (new Ice());
    else if(type == "cure")
        return (new Cure());
    else
        return (NULL);
}
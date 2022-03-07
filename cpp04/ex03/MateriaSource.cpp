/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:07:21 by marcos            #+#    #+#             */
/*   Updated: 2022/03/07 18:08:24 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): nmaterias(0)
{
    std::cout << "MateriaSource Constructor main called" << std::endl;
}

MateriaSource::~MateriaSource( void )
{
    std::cout << "MateriaSource Destructor main called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->inventory[0] = copy.inventory[0];
    this->inventory[1] = copy.inventory[1];
    this->inventory[2] = copy.inventory[2];
    this->inventory[3] = copy.inventory[3];
    this->nmaterias = copy.nmaterias;
}
MateriaSource &MateriaSource::operator =( const MateriaSource &materiasource )
{
    std::cout << "Assignation operator called" << std::endl;
    this->inventory[0] = materiasource.inventory[0];
    this->inventory[1] = materiasource.inventory[1];
    this->inventory[2] = materiasource.inventory[2];
    this->inventory[3] = materiasource.inventory[3];
    this->nmaterias = materiasource.nmaterias;
    return (*this);
}

void MateriaSource::learnMateria(AMateria *amateria)
{
    if(this->nmaterias < 4)
		this->inventory[this->nmaterias] = amateria;
	else
		std::cout << "Nothing else can be equiped" << std::endl;
	this->nmaterias++;
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
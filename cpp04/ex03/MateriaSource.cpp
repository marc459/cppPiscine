/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:07:21 by marcos            #+#    #+#             */
/*   Updated: 2022/07/07 20:19:51 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): nmaterias(0)
{
    for (size_t i = 0; i < 4; i++)
		inventory[i] = NULL;

}

MateriaSource::~MateriaSource( void )
{
    for (size_t i = 0; i < 4; i++)
		delete inventory[i];

}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
    this->inventory[0] = copy.inventory[0];
    this->inventory[1] = copy.inventory[1];
    this->inventory[2] = copy.inventory[2];
    this->inventory[3] = copy.inventory[3];
    this->nmaterias = copy.nmaterias;

}
MateriaSource &MateriaSource::operator =( const MateriaSource &materiasrc)
{
    this->inventory[0] = materiasrc.inventory[0];
    this->inventory[1] = materiasrc.inventory[1];
    this->inventory[2] = materiasrc.inventory[2];
    this->inventory[3] = materiasrc.inventory[3];
    this->nmaterias = materiasrc.nmaterias;
    return (*this);

}

void MateriaSource::learnMateria(AMateria *amateria)
{
    if(this->nmaterias < 4)
		this->inventory[this->nmaterias] = amateria;
	else
		std::cout << "Materias is full" << std::endl;
	this->nmaterias++;

}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->nmaterias; i++)
		if (inventory[i]->getType().compare(type))
			return (inventory[i]->clone());
	return 0;

}
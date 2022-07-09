/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:45:18 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 10:29:47 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


Character::Character( void ):  name(""), nequip(0)
{

    inventory[0] = NULL;
    inventory[1] = NULL;
    inventory[2] = NULL;
    inventory[3] = NULL;
}

Character::Character( std::string name ): nequip(0)
{

    inventory[0] = NULL;
    inventory[1] = NULL;
    inventory[2] = NULL;
    inventory[3] = NULL;
    this->name = name;
}


Character::~Character( void )
{
    for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}
Character::Character(const Character &copy)
{

    for (int i = 0; i < 4; i++)
        this->inventory[i] = copy.inventory[i];
    this->name = copy.name;
}
Character &Character::operator =( const Character &character )
{

    this->name = character.name;
    return (*this);
}



std::string const &Character::getName() const
{
    return this->name;
}

void Character::setName(std::string name)
{
    this->name = name;
}

void Character::equip(AMateria* m)
{
	if (this->nequip < 4)
    {
        this->inventory[this->nequip] = m;
        this->nequip++;
    }
	else
		std::cout << "Nothing else can be equiped" << std::endl;
	
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(inventory[idx])
	    this->inventory[idx]->use(target);
}
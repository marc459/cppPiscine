/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:45:18 by marcos            #+#    #+#             */
/*   Updated: 2022/03/06 17:13:09 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

#include "Character.hpp"
Character::Character( void )
{
    std::cout << "Character Constructor main called" << std::endl;
}

Character::Character( std::string name )
{
    std::cout << "Character Constructor called" << std::endl;
    this->name = name;
}


Character::~Character( void )
{
    std::cout << "Character Destructor main called" << std::endl;
}
Character::Character(const Character &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->name = copy.name;
}
Character &Character::operator =( const Character &character )
{
    std::cout << "Assignation operator called" << std::endl;
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
		this->inventory[this->nequip] = m;
	else
		std::cout << "Nothing else can be equiped" << std::endl;
	this->nequip++;
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:07 by marcos            #+#    #+#             */
/*   Updated: 2022/03/03 17:12:27 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "Constructor main called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    this->setName(copy.getName());
}

ClapTrap &ClapTrap::operator = (const ClapTrap &ct)
{
    std::cout << "Assignation operator called" << std::endl;
    if (&ct == this)
		return *this;
    this->setHitPoints(ct.getHitPoints());
    this->setEnergyPoints(ct.getEnergyPoints());
    this->setAttackDamage(ct.getAttackDamage());
    this->setName(ct.getName());
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap "<< this->getName() << " attack " << target << ", causing "<< this->getAttackDamage() << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
        std::cout << "ClapTrap "<< this->getName() << " taked "<< amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
        std::cout << "ClapTrap "<< this->getName() << " repared "<< amount << " points!" << std::endl;
    
}

std::string ClapTrap::getName( void ) const
{
    return(this->name);
}

int ClapTrap::getHitPoints( void ) const
{
    return(this->hitPoints);
}
int ClapTrap::getEnergyPoints( void ) const
{
    return (this->energyPoints);
}
int ClapTrap::getAttackDamage( void ) const
{
    return (this->attackDamage);
}

void ClapTrap::setName( const std::string name )
{
    this->name = name;
}
void ClapTrap::setHitPoints( const int hitPoints)
{
    this->hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints( const int energyPoints)
{
    this->energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage( const int attackDamage )
{
    this->attackDamage = attackDamage;
}
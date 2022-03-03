/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:07 by marcos            #+#    #+#             */
/*   Updated: 2022/03/03 17:24:28 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "Constructor main called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
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
    this->_name = copy._name;
    this->_hitpoints = copy._hitpoints;
    this->_energypoints = copy._energypoints;
    this->_attackdamage = copy._attackdamage;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &ct)
{
    std::cout << "Assignation operator called" << std::endl;
	if (&ct == this)
		return *this;
    this->_name = ct._name;
    this->_hitpoints = ct._hitpoints;
    this->_energypoints = ct._energypoints;
    this->_attackdamage = ct._attackdamage;

	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap "<< this->_name << " attack " << target << ", causing "<< this->_attackdamage<< " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
        std::cout << "ClapTrap "<< this->_name << " taked "<< amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
        std::cout << "ClapTrap "<< this->_name << " repared "<< amount << " points!" << std::endl;
    
}
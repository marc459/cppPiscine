/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:32:07 by marcos            #+#    #+#             */
/*   Updated: 2022/03/02 14:05:55 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
    this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    this->setName(copy.getName());
}

void ScavTrap::guardGate( void ){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
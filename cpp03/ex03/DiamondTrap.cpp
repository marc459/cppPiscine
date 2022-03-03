/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:16:27 by marcos            #+#    #+#             */
/*   Updated: 2022/03/03 15:45:20 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name) , FragTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    this->setName(copy.getName());
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I am claptrap "<< this->getName() << "and myDiamondTrap name "<< this->name << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:33:51 by marcos            #+#    #+#             */
/*   Updated: 2022/03/02 14:42:43 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
    this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->setHitPoints(copy.getHitPoints());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setAttackDamage(copy.getAttackDamage());
    this->setName(copy.getName());
}

void FragTrap::highFivesGuys( void ){
    std::cout << "HIGHH FIVEEE GUYYSSS!!!!!!!!!!!!" << std::endl;
}
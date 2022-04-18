/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:49:10 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 11:34:51 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB(void){
     
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void){
    if(this->_weapon)
        std::cout << this->_name << " ATTACK WITH HIS " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " HAS NO WEAPON" << std::endl;
}
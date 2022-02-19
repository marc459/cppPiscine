/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:49:10 by marcos            #+#    #+#             */
/*   Updated: 2022/02/19 14:09:43 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
     this->_name = name;
}

HumanB::~HumanB(void){
     
}

void HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}

void HumanB::attack(void){
    std::cout << this->_name << "ATTACK WITH HIS" << this->_weapon.getType() << std::endl;
}
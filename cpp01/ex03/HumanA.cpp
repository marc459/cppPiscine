/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:49:07 by marcos            #+#    #+#             */
/*   Updated: 2022/02/19 14:04:36 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)  : _weapon(weapon)
{
    std::cout << "HumanA constructor called" << std::endl;
     this->_name = name;
     this->_weapon = weapon;
}

HumanA::~HumanA(void){
     
}

void HumanA::attack(void){
    std::cout << this->_name << "ATTACK WITH HIS" << this->_weapon.getType() << std::endl;
}
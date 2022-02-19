/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:41:52 by marcos            #+#    #+#             */
/*   Updated: 2022/02/19 14:12:49 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->_type = type;
}
Weapon::Weapon(void){

}
Weapon::~Weapon(void){

}


const std::string &Weapon::getType(void)
{
    const std::string &type = this->_type;
    return (type);
}
void Weapon::setType(std::string type){
    this->_type = type;
}
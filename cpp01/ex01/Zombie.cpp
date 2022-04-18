/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:40:03 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 10:23:49 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Bye Bye " << this->_name << std::endl;
} 

void Zombie::announce(void)
{
    std::cout << "BraiiiiiiinnnzzzZZ....." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

std::string    Zombie::getName(void)
{
    return(this->_name);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:44:41 by marcos            #+#    #+#             */
/*   Updated: 2022/05/27 12:51:23 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal Constructor main called" << std::endl;
}
Animal::Animal(std::string type)
{
    std::cout << "Animal Constructor called" << std::endl;
    this->setType(type);
}
Animal::~Animal( void )
{
    std::cout << "Animal Destructor main called" << std::endl;
}
Animal::Animal(const Animal &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
Animal &Animal::operator =( const Animal &animal )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = animal.type;
    return (*this);
}

    
std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:44:41 by marcos            #+#    #+#             */
/*   Updated: 2022/03/04 20:25:39 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal Constructor main called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    this->setType(type);
}
WrongAnimal::~WrongAnimal( void )
{
    std::cout << "Destructor main called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
WrongAnimal &WrongAnimal::operator =( const WrongAnimal &WrongAnimal )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = WrongAnimal.type;
    return (*this);
}

void WrongAnimal::makeSound( void ) const
{
}
    
std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}
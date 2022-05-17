/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:35:57 by marcos            #+#    #+#             */
/*   Updated: 2022/05/17 15:28:48 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "Dog Constructor main called" << std::endl;
}
Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(const Dog &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->setType(copy.getType());
}
Dog &Dog::operator =( const Dog &dog )
{
    std::cout << "Assignation operator called" << std::endl;
    this->setType(dog.getType());
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout << "GUAUUUUUUU!!!" << std::endl;
}
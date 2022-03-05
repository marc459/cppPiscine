/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:35:57 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 19:59:40 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("dog")
{
    std::cout << "Dog Constructor main called" << std::endl;
    this->brain = new Brain();
    
}
Dog::~Dog( void )
{
    std::cout << "Dog Destructor main called" << std::endl;
    delete brain;
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
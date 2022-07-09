/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:35:57 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 18:10:57 by msantos-         ###   ########.fr       */
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
    this->brain = new Brain();
    *this->brain = Brain(*copy.brain);
}
Dog &Dog::operator =( const Dog &dog )
{
    std::cout << "Assignation operator called" << std::endl;
    this->setType(dog.getType());
    delete this->brain;
    this->brain = new Brain();
    *this->brain = *dog.brain;
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout << "GUAUUUUUUU!!!" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
    return this->brain;
    
}
void	Dog::setBrain(Brain *brain)
{
    this->brain = new Brain(*brain);
}
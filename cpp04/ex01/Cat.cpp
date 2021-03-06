/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:30 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 18:09:35 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Cat Constructor main called" << std::endl;
    this->brain = new Brain();
}
Cat::~Cat( void )
{
    std::cout << "Cat Destructor main called" << std::endl;
    delete brain;
}
Cat::Cat(const Cat &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->setType(copy.getType());
    this->brain = new Brain();
    *this->brain = Brain(*copy.brain);
    
}
Cat &Cat::operator =( const Cat &cat )
{
    std::cout << "Assignation operator called" << std::endl;
    this->setType(cat.getType());
    delete this->brain;
    this->brain = new Brain();
    *this->brain = *cat.brain;
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << "MIAUUUUUU" << std::endl;
}
Brain	*Cat::getBrain(void) const
{
    return this->brain;
    
}
void	Cat::setBrain(Brain *brain)
{
    this->brain = brain;
}
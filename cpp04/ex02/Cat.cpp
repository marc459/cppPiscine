/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:30 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 19:59:50 by marcos           ###   ########.fr       */
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
    this->type = copy.type;
}
Cat &Cat::operator =( const Cat &cat )
{
    std::cout << "Assignation operator called" << std::endl;
    this->setType(cat.getType());
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << "MIAUUUUUU" << std::endl;
}
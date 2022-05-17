/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:30 by marcos            #+#    #+#             */
/*   Updated: 2022/05/17 14:55:28 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Cat Constructor main called" << std::endl;
}
Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
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
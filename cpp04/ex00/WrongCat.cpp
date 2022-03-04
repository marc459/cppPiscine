/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:30:30 by marcos            #+#    #+#             */
/*   Updated: 2022/03/04 20:23:24 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor main called" << std::endl;
}
WrongCat::~WrongCat( void )
{
    std::cout << "Destructor main called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
WrongCat &WrongCat::operator =( const WrongCat &WrongCat )
{
    std::cout << "Assignation operator called" << std::endl;
    this->setType(WrongCat.getType());
    return (*this);
}

void WrongCat::makeSound( void ) const
{
    std::cout << "MIAUUUUUU" << std::endl;
}
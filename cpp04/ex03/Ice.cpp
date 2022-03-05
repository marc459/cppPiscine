/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:09:24 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 22:35:53 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void )
{
    std::cout << "Ice Constructor main called" << std::endl;
    this->type = "ice";
}

Ice::~Ice( void )
{
    std::cout << "Ice Destructor main called" << std::endl;
}
Ice::Ice(const Ice &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
Ice &Ice::operator =( const Ice &ice )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = ice.type;
    return (*this);
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}
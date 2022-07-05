/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:09:24 by marcos            #+#    #+#             */
/*   Updated: 2022/07/05 19:40:55 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void )
{

    this->type = "ice";
}

Ice::~Ice( void )
{

}
Ice::Ice(const Ice &copy)
{

    this->type = copy.type;
}
Ice &Ice::operator =( const Ice &ice )
{

    this->type = ice.type;
    return (*this);
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at "  << target.getName() <<  std::endl;
}
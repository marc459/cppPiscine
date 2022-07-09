/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:44:18 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 10:12:33 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )
{

    this->type = "cure";
}

Cure::~Cure( void )
{

}
Cure::Cure(const Cure &copy)
{

    this->type = copy.type;
}
Cure &Cure::operator =( const Cure &cure )
{

    this->type = cure.type;
    return (*this);
}

AMateria* Cure::clone() const{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << target.getName() << "’s wounds" <<  std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:44:18 by marcos            #+#    #+#             */
/*   Updated: 2022/03/07 17:56:20 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )
{
    std::cout << "Cure Constructor main called" << std::endl;
    this->type = "cure";
}

Cure::~Cure( void )
{
    std::cout << "Cure Destructor main called" << std::endl;
}
Cure::Cure(const Cure &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
Cure &Cure::operator =( const Cure &cure )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = cure.type;
    return (*this);
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << target.getName() << "’s wounds" <<  std::endl;
}
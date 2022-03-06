/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:51:29 by marcos            #+#    #+#             */
/*   Updated: 2022/03/06 17:19:57 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
AMateria::AMateria( void )
{
    std::cout << "AMateria Constructor main called" << std::endl;
}
AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria Constructor called" << std::endl;
    this->type = type;
}

AMateria::~AMateria( void )
{
    std::cout << "AMateria Destructor main called" << std::endl;
}
AMateria::AMateria(const AMateria &copy)
{
    std::cout << "Copy Constructor main called" << std::endl;
    this->type = copy.type;
}
AMateria &AMateria::operator =( const AMateria &amateria )
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = amateria.type;
    return (*this);
}

void use(ICharacter& target)
{
    std::cout << "Using unknown materia" <<  std::endl;
    target.getName();
}
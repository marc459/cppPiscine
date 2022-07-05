/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:51:29 by marcos            #+#    #+#             */
/*   Updated: 2022/07/05 19:40:21 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
AMateria::AMateria( void )
{

}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::~AMateria( void )
{
}
AMateria::AMateria(const AMateria &copy)
{
    this->type = copy.type;
}
AMateria &AMateria::operator =( const AMateria &amateria )
{
    this->type = amateria.type;
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Using unknown materia" <<  std::endl;
    target.getName();
}
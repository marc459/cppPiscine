/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:51:32 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 22:41:20 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria
{
    protected:
        std::string	type;
    public:
        AMateria( void );
        AMateria(const AMateria &copy);
        virtual ~AMateria( void );
        AMateria &operator =( const AMateria &amateria );
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);
};
#endif
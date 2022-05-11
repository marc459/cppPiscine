/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:44:38 by marcos            #+#    #+#             */
/*   Updated: 2022/03/04 20:24:38 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal( void );
        WrongAnimal(std::string type);
        ~WrongAnimal( void );
        WrongAnimal(const WrongAnimal &WrongAnimal);
        WrongAnimal &operator =( const WrongAnimal &WrongAnimal );

       void makeSound( void )const;
        
        std::string getType() const;
        void setType(std::string type);
};
#endif
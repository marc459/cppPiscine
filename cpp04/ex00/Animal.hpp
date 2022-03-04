/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
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

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal{
    protected:
        std::string type;

    public:
        Animal( void );
        Animal(std::string type);
        ~Animal( void );
        Animal(const Animal &animal);
        Animal &operator =( const Animal &animal );

        virtual void makeSound( void )const;
        
        std::string getType() const;
        void setType(std::string type);
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:44:38 by marcos            #+#    #+#             */
/*   Updated: 2022/05/27 12:52:08 by msantos-         ###   ########.fr       */
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
        virtual ~Animal( void );
        Animal(const Animal &animal);
        Animal &operator =( const Animal &animal );

        virtual void makeSound( void ) const = 0;
        
        std::string getType() const;
        void setType(std::string type);
};
#endif
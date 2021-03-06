/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:05 by marcos            #+#    #+#             */
/*   Updated: 2022/04/24 21:57:00 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
class ClapTrap{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
        
    public:
        ClapTrap( void );
        ClapTrap(std::string name);
        virtual ~ClapTrap( void );
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator = (const ClapTrap &ct);

        std::string getName( void ) const;
        int getHitPoints( void ) const;
        int getEnergyPoints( void ) const;
        int getAttackDamage( void ) const;

        void setName( const std::string name );
        void setHitPoints( const int hitPoints);
        void setEnergyPoints( const int energyPoints);
        void setAttackDamage( const int attackDamage);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif
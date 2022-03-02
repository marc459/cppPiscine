/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:05 by marcos            #+#    #+#             */
/*   Updated: 2022/03/01 16:26:36 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

class ClapTrap{
    private:
        std::string _name;
        int _hitpoints;
        int _energypoints;
        int _attackdamage;
        
    public:
        ClapTrap( void );
        ClapTrap(std::string name);
        ~ClapTrap( void );
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator = (const ClapTrap &ct);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};
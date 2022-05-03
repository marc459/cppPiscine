/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:32:04 by marcos            #+#    #+#             */
/*   Updated: 2022/05/03 13:59:23 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCLAVTRAP_HPP
#define SCLAVTRAP_HPP

class ScavTrap : virtual public ClapTrap{
    private:
        
        
    public:
        ScavTrap( void );
        ScavTrap(std::string name);
        virtual ~ScavTrap( void );
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator = (const ScavTrap &ct);

        void attack( std::string const &target );
        void guardGate( void );
    
};

#endif
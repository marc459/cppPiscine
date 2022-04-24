/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:32:04 by marcos            #+#    #+#             */
/*   Updated: 2022/04/24 21:57:19 by msantos-         ###   ########.fr       */
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

        void guardGate( void );
    
};

#endif
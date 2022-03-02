/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:32:04 by marcos            #+#    #+#             */
/*   Updated: 2022/03/02 14:34:51 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCLAVTRAP_HPP
#define SCLAVTRAP_HPP

class ScavTrap : public ClapTrap{
    private:
        
        
    public:
        ScavTrap( void );
        ScavTrap(std::string name);
        ~ScavTrap( void );
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator = (const ScavTrap &ct);

        void guardGate( void );
    
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:16:30 by marcos            #+#    #+#             */
/*   Updated: 2022/03/03 14:38:11 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
        
        std::string name;
    public:
        DiamondTrap( void );
        DiamondTrap(std::string name);
        ~DiamondTrap( void );
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator = (const DiamondTrap &ct);

        void whoAmI(void);
    
};

#endif
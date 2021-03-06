/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:34:07 by marcos            #+#    #+#             */
/*   Updated: 2022/05/03 13:53:09 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap{    
    public:
        FragTrap( void );
        FragTrap(std::string name);
        ~FragTrap( void );
        FragTrap(const FragTrap &copy);
        FragTrap &operator = (const FragTrap &ct);

        void attack( std::string const &target );
        void highFivesGuys(void);
    
};

#endif
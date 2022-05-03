/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:34:07 by marcos            #+#    #+#             */
/*   Updated: 2022/04/24 21:56:07 by msantos-         ###   ########.fr       */
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

        void highFivesGuys(void);
    
};

#endif
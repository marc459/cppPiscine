/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:49:15 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 11:29:13 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <cctype>
#include "Weapon.hpp"

class HumanB{
    
    private:
    std::string _name;
    Weapon *_weapon;

    public:
        HumanB(std::string _name);
        ~HumanB(void);
        void setWeapon(Weapon &weapon);
        void attack(void);
};
#endif
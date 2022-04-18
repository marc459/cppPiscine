/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:40:00 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 11:24:48 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <cctype>

class Weapon{

    private:
        std::string _type;
    public:
        Weapon(std::string type);
        Weapon(void);
        ~Weapon(void);
        const std::string getType(void);
        void setType(std::string type);
};
#endif
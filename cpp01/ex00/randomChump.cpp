/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:46:43 by marcos            #+#    #+#             */
/*   Updated: 2022/02/17 14:09:21 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*randomChump(std::string name)
{
    
    Zombie *randchump = new_zombie(name);
    randchump->announce();
    return (randchump);
    
}
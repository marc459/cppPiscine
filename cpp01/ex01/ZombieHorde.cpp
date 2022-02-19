/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:21:23 by marcos            #+#    #+#             */
/*   Updated: 2022/02/18 19:20:18 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
    Zombie *zombiehorde;
    //std::list<int> zombiee;
    
    zombiehorde = new Zombie[N];

    for (int i = 0; i < N; i++)
		zombiehorde[i].setName(name + (char)(i + 49));
	return zombiehorde;
}
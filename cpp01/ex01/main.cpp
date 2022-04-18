/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:21:46 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 10:25:48 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Zombie.hpp"
using namespace std;

int    main(int argc, char **argv)
{
    Zombie *zombie = ZombieHorde(6, "zombie");
    for(int i = 0; i < 6;i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
    
}
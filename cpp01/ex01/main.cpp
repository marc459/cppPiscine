/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:21:46 by marcos            #+#    #+#             */
/*   Updated: 2022/02/18 20:21:48 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Zombie.hpp"
using namespace std;

int    main(int argc, char **argv)
{
    int n;
    n = 6;
    Zombie *zombie = ZombieHorde(n, "hola");
    for(int i = 0; i < n;i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
    
}
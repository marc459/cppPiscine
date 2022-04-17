/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:09:52 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/17 19:54:16 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Zombie.hpp"
using namespace std;

int    main(int argc, char **argv)
{
    
    Zombie *randzombie = newZombie("Zombie");
    randomChump("randZombie");
    delete randzombie;
    return (0);
    
}
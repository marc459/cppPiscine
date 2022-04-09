/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:09:52 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/09 22:37:27 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <stdio.h>

int    main(int argc, char **argv)
{
    int x;
    int y;

    x = 1;
    y = 0;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(argv[x])
    {
        while(argv[x][y])
        {
            std::cout << (char)std::toupper(argv[x][y]);
            y++;
        }
        y = 0;
        x++;

    }
    
    return (0);
    
}
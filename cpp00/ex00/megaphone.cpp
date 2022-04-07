/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:09:52 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/07 20:49:39 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int    main(int argc, char **argv)
{
    int x;
    int y;

    x = 1;
    y = 0;
    if(argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(argv[x])
    {
        std::cout << std::toupper(argv[x]);
        x++;

    }
    
    return (0);
    
}
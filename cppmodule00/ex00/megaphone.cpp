/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:09:52 by msantos-          #+#    #+#             */
/*   Updated: 2021/12/06 20:18:45 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
using namespace std;

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
        while(argv[x][y] != '\0')
        {
            cout << toupper(argv[x][y]);
            y++;
        }
        x++;
        y = 0;
    }
    
    return (0);
    
}
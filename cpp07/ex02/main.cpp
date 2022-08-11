/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/11 22:54:46 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{

	Array<char> charArray(4);
    Array<double> floatChar(3);
    Array<unsigned int> empty;

    charArray[0] = 'f';
    charArray[1] = 'o';
    charArray[2] = 'u';
    charArray[3] = 'r';

    floatChar[0] = 23.5;
    floatChar[1] = 66.66;
    floatChar[2] = 433;

	try
    {

    for (int i = 0; i < 4; i++)
		std::cout << charArray[i];
	std::cout << std::endl;

    for (int i = 0; i < 3; i++)
		std::cout << floatChar[i] << std::endl;

    
        floatChar[10] = 7;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}
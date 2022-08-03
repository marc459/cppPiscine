/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/03 03:19:26 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtString.hpp"

#include <string>
#include <iostream>
#include <math.h>


int main(int argc, char const *argv[])
{
   
	if (argc != 2)
	{
		std::cout << "Wrong num of args" << std::endl;
		return (0);
	}
     
	try
	{

        Ftstring *conversion = new Ftstring(argv[1]);
		std::cout << std::endl;
		conversion->toChar();
		conversion->toInt();
		conversion->toFloat();
		conversion->toDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
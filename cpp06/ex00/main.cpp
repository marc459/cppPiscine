/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/02 22:42:11 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtString.hpp"

#include <string>
#include <iostream>
#include <math.h>


int main(int argc, char const *argv[])
{
    Ftstring conversion = new Ftstring();
	std::string	word;
	double		nDouble;

	if (argc != 2)
	{
		std::cout << "Wrong num of args" << std::endl;
		return (0);
	}
	word = argv[1];
	try
	{
		if (word == "+inff")
			nDouble = 1.0 / 0.0;
		else if (word == "-inff")
			nDouble = -1.0 / 0.0;
		else if (word == "nanf")
			nDouble = 0.0 / 0.0;
		else
			nDouble = std::stod(word);
		std::cout << std::endl;
		displayChar(nDouble);
		displayInt(nDouble);
		displayFloat(nDouble);
		displayDouble(nDouble);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:20 by marcos            #+#    #+#             */
/*   Updated: 2022/02/19 17:34:01 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>

void   replace(std::string &s1, std::string &s2){
    
}

int    main(int argc, char **argv)
{
    std::fstream myfile;
    std::string filename;
    char ch;
    std::string filecontet;
    std::string s1;
    std::string s2;
    std::cout << "File";
    std::cin >> filename;
    std::cout << "s1";
    std::cin >> s1;
    std::cout << "s2";
    std::cin >> s2;

    myfile.open(filename, std::ios::in);
    while (1) {
			myfile >> ch;
			if (myfile.eof())
				break;

			std::cout << ch;
	}
    myfile.close();
    
    
}
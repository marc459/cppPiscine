/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:44 by msantos-          #+#    #+#             */
/*   Updated: 2023/03/10 16:07:34 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>


int main(int argc, char **argv)
{
    std::map<std::string, std::string>	dataSet;
    std::string mystring;
    
    if(argc == 2)
    {
        try{
            
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        std::ifstream file (argv[1]);
        //file.open(argv[1]);
        //if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            std::cout << line << std::endl;
        }
       // }
        file.close();
    }
        
    

}
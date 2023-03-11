/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:29:35 by msantos-          #+#    #+#             */
/*   Updated: 2023/03/11 04:53:40 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>
#include <stdexcept>


int main(int argc, char **argv)
{
    std::map<std::string, std::string>	dataSet;
    size_t                   pos = 0;
	std::string              key;
    std::string              value;
    std::string              delimiter = " | ";
    std::regex date_regex("^\\d{4}-\\d{2}-\\d{2}$");
    
    
    if(argc == 2)
    {
        
            std::ifstream file (argv[1]);
            if ( file.is_open() ) {
                for (std::string line; std::getline(file, line);)
                {
                    //std::cout << line << std::endl;
                    if ((pos = line.find(" | ")) != std::string::npos) // fill line
                    {
                        key = line.substr(0, pos);
                        
                        std::cout << key << std::endl;
                        //parts.push_back(key);
                        line.erase(0, pos + delimiter.length());
                        value = line;
                        //std::cout << stoi(value)  << std::endl << std::endl;
                        try{
                            if (!std::regex_match(key, date_regex))
                                throw std::runtime_error("Error: Invalid date");
                            else if(std::stoi(value) < 0 || std::stoi(value) > 100)
                                throw std::runtime_error("Error: Invalid Value");
                            else
                                dataSet.insert ( std::pair<std::string,std::string>(key,value) );
                         }
                        catch (std::exception & e)
                        {
                            std::cout << e.what() << std::endl;
                        }
                            
                    }
                }
            }
            file.close();
       
    }
}


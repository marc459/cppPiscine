/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:44 by msantos-          #+#    #+#             */
/*   Updated: 2023/04/20 02:36:15 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string FileDataSet,std::string FileDataExchange )
{
    (void)FileDataExchange;
    parseFileDataSet(FileDataSet);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy): dataSet(copy.dataSet)
{
    
    std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange(void)
{
    std::cout << "BitcoinExchange destructor called" << std::endl;
}

int     BitcoinExchange::parseFileDataSet(std::string FileDataSet)
{
    size_t                   pos = 0;
	std::string              key;
    std::string              value;
    std::string              delimiter = " | ";
    std::regex date_regex("^\\d{4}-\\d{2}-\\d{2}$");
    
    
    std::ifstream file (FileDataSet);
    std::cout << "File " << file.is_open() << std::endl;
    if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            if ((pos = line.find(" | ")) != std::string::npos) // fill line
            {
                key = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
                value = line;
                try{
                    if (!std::regex_match(key, date_regex))
                        throw std::runtime_error("Error: Invalid date");
                    else if(std::stol(value)> 2147483647)
                        throw std::runtime_error("Error: too large a number.");
                    else if(std::stoi(value) < 0)
                        throw std::runtime_error("Error: not a positive number.");
                    else
                    {
                        //std::cout << key << " " << value << std::endl;
                        std::cout <<  key << " " << value << " -> " << this->dataSet.size() << std::endl;
                        std::cout  << this->dataSet.size() << std::endl;
                        this->dataSet.insert( std::make_pair(key,value) );
                        
                    }
                }
                catch (std::exception & e)
                {
                    std::cout << e.what() << std::endl;
                }
                    
            }
            else{
                 std::cout << "Error: bad input"<< std::endl;
            }
        }
    }
    file.close();
       
    return (0);
}

int     BitcoinExchange::parseFileDataExchange(std::string FileDataExchange)
{
    size_t                   pos = 0;
	std::string              key;
    std::string              value;
    std::string              delimiter = ",";
    std::regex date_regex("^\\d{4}-\\d{2}-\\d{2}$");
    
    
    std::ifstream file (FileDataExchange);
    std::cout << "File " << file.is_open() << std::endl;
    if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            if ((pos = line.find(" | ")) != std::string::npos) // fill line
            {
                key = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
                value = line;
                try{
                    if (!std::regex_match(key, date_regex))
                        throw std::runtime_error("Error: Invalid date");
                    else if(std::stol(value)> 2147483647)
                        throw std::runtime_error("Error: too large a number.");
                    else if(std::stoi(value) < 0)
                        throw std::runtime_error("Error: not a positive number.");
                    else
                    {
                        //std::cout << key << " " << value << std::endl;
                        this->dataExchange.insert( std::pair<std::string,std::string>(key,value) );
                    }
                        
                }
                catch (std::exception & e)
                {
                    std::cout << e.what() << std::endl;
                }
                    
            }
        }
    }
    file.close();
       
    return (0);
}

std::map<std::string, std::string> BitcoinExchange::getdataSet() const
{
    return this->dataSet;
}
std::ostream&	operator << (std::ostream &os, BitcoinExchange &e)
{
    e.getdataSet();
	std::map<std::string, std::string>::iterator it;
    for (it = e.getdataSet().begin(); it != e.getdataSet().end(); ++it) {
        os << it->first << " | " << it->second << std::endl;
    }

	return (os);
}
    

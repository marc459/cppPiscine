/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:44 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/23 21:48:41 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string FileDataSet,std::string FileDataExchange )
{
    parseFileDataExchange(FileDataExchange);
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

void BitcoinExchange::PrintExchange(std::string date, std::string cuantity)
{
    //2011-01-03 => 3 = 0.9
    
    std::map<std::string, std::string>::iterator it = this->dataExchange.find(date);
    //std::cout << "Exchange " << date << " " << cuantity << std::endl;
    if(it != this->dataExchange.end())
    {
         std::cout << it->first << " " << cuantity << std::endl;
    }
    it = this->dataExchange.lower_bound(date);
    if (it != this->dataExchange.begin()) {
        --it;
         std::cout << it->first << " => " << cuantity << " = " << ( std::stof(it->second) *  std::stof(cuantity))  << std::endl;
    }
   
}

int     BitcoinExchange::parseFileDataSet(std::string FileDataSet)
{
    size_t                   pos = 0;
	std::string              key;
    std::string              value;
    std::string              delimiter = " | ";
    std::regex date_regex("^\\d{4}-\\d{2}-\\d{2}$");
    
    
    std::ifstream file (FileDataSet);
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
                    else if(std::stol(value)> 1000)
                        throw std::runtime_error("Error: too large a number.");
                    else if(std::stoi(value) < 0)
                        throw std::runtime_error("Error: not a positive number.");
                    else
                        PrintExchange(key,value);
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
    if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            if ((pos = line.find(",")) != std::string::npos) // fill line
            {
                key = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
                value = line;
                try{
                    this->dataExchange.insert( std::make_pair(key,value) ); 
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

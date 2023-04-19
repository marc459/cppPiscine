/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:44 by msantos-          #+#    #+#             */
/*   Updated: 2023/04/19 20:06:11 by msantos-         ###   ########.fr       */
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
    
    std::cout << "File " << file.is_open() << std::endl;
    std::ifstream file (FileDataSet);
    if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            std::cout << line << std::endl;
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
                    {
                        std::cout << key << " " << value << std::endl;
                    }
                        //this->dataSet.insert ( std::pair<std::string,std::string>(key,value) );
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
    os << "foo" << std::endl;
	/*std::map<std::string, std::string>::iterator it;
    for (it = e.getdataSet().begin(); it != e.getdataSet().end(); ++it) {
        os << it->first << " | " << it->second << std::endl;
    }*/

	return (os);
}
    

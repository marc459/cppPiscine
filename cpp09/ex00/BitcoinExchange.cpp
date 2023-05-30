/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:44 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/30 22:54:37 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string FileDataSet,std::string FileDataExchange )
{
    parseFileDataExchange(FileDataExchange);
    parseFileDataSet(FileDataSet);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    dataExchange = copy.dataExchange;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &cp)
{
    this->dataExchange = cp.dataExchange;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(void){}

float ft_stof(const std::string& str) {
    const char* charPtr = str.c_str();
    return static_cast<float>(std::atof(charPtr));
}

bool ft_sisnumber(const std::string& str) {
    if(str.length() == 0)
        return false;
    for(size_t i = 0; i < str.length(); i++)
    {
        if(!(str[i] > 47 && str[i] < 58))
            return false;
    }
    return true;
}
float ft_stoi(const std::string& str) {
    const char* charPtr = str.c_str();
    return static_cast<float>(std::atoi(charPtr));
}

void BitcoinExchange::PrintExchange(std::string date, std::string cuantity)
{
    std::map<std::string, std::string>::iterator it = this->dataExchange.find(date);
    if(it != this->dataExchange.end())
    {
         std::cout << it->first << " " << cuantity << std::endl;
    }
    it = this->dataExchange.lower_bound(date);
    if (it != this->dataExchange.begin()) {
        --it;
         std::cout << it->first << " => " << cuantity << " = " << ( ft_stof(it->second) * ft_stof(cuantity))  << std::endl;
    }
   
}

bool    isDate(std::string date)
{
    int day = 0;
    int month = 0;
    int year = 0;
    size_t i = 0;
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;

    while(date[i] != '-' && i < date.length())
    {
        if(!(date[i] > 47 && date[i] < 58))
            return false;
        else
            year = year * 10 + (date[i] - '0');
        i++;
    }
    i++;
    while(date[i] != '-' && i < date.length())
    {
        if(!(date[i] > 47 && date[i] < 58))
            return false;
        else
            month = month * 10 + (date[i] - '0');
        i++;
    }
    i++;
    while( i < date.length())
    {
        if(!(date[i] > 47 && date[i] < 58))
            return false;
        else
            day = day * 10 + (date[i] - '0');
        i++;
    }
    if(year <= 0 || month <= 0 || month > 12 || day <= 0 || day > 31)
        return false;
    return(true);


}

void     BitcoinExchange::parseFileDataSet(std::string FileDataSet)
{
    size_t                   pos = 0;
	std::string              key;
    std::string              value;
    std::string              delimiter = " | ";
    
    std::ifstream file (FileDataSet.c_str());
    if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            if ((pos = line.find(" | ")) != std::string::npos) // fill line
            {
                key = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
                value = line;
                try{
                    if (!isDate(key))
                        throw std::runtime_error("Error: Invalid date");
                    else if(ft_stoi(value)> 1000)
                        throw std::runtime_error("Error: too large a number.");
                    else if(ft_sisnumber(value) == false)
                         throw std::runtime_error("Error: value is not a number");
                    else if(ft_stoi(value) < 0)
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
}

void     BitcoinExchange::parseFileDataExchange(std::string FileDataExchange)
{
    size_t                   pos = 0;
	std::string              key;
    std::string              value;
    std::string              delimiter = ",";
    
    
    std::ifstream file (FileDataExchange.c_str());
    if ( file.is_open() ) {
        for (std::string line; std::getline(file, line);)
        {
            if ((pos = line.find(",")) != std::string::npos)
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
}
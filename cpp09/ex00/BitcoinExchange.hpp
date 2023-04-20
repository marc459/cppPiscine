/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:41 by msantos-          #+#    #+#             */
/*   Updated: 2023/04/20 02:16:22 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>
#include <stdexcept>

class BitcoinExchange{
    private:
        std::map<std::string, std::string>	dataSet;
        std::map<std::string, std::string>	dataExchange;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string FileDataSet, std::string FileDataExchange);
		BitcoinExchange(const BitcoinExchange &copy);
		virtual	~BitcoinExchange(void);
		BitcoinExchange &operator=(const BitcoinExchange &op);
        
        int    parseFileDataSet(const std::string file);
        int    parseFileDataExchange(const std::string file);
        
        std::map<std::string, std::string> getdataSet() const;
};

std::ostream&	operator << (std::ostream &os, BitcoinExchange &e);



#endif
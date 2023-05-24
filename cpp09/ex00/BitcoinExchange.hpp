/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:41 by msantos-          #+#    #+#             */
/*   Updated: 2023/04/21 00:08:30 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>
#include <cstdlib>

class BitcoinExchange{
    private:
        std::map<std::string, std::string>	dataExchange;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string FileDataSet, std::string FileDataExchange);
		BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &cp);
		virtual	~BitcoinExchange(void);
        
        void    parseFileDataSet(const std::string file);
        void    parseFileDataExchange(const std::string file);
        void   PrintExchange(std::string date, std::string cuantity);
        
};

#endif
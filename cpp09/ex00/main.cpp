/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:29:35 by msantos-          #+#    #+#             */
/*   Updated: 2023/04/21 00:08:12 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



int main(int argc, char **argv)
{
    if(argc == 2)
    {
        std::ifstream file (argv[1]);
        if(file.is_open())
            BitcoinExchange b = BitcoinExchange(argv[1], "data.csv");
        else
            std::cout << "Error: could not open file." << std::endl;

    }
        
}


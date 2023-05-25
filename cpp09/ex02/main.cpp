/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:15:01 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/26 00:52:09 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

bool isNumeric(const std::string& str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (*it < '0' || *it > '9') {
            return false;
        }
    }
    return true;
}

int main(int argc, char **argv)
{
    
    if(argc > 1)
    {
        int arr[argc];
        for(int i = 1; i < argc; i++)
        {
            try {
				if(!isNumeric(argv[i]))
					throw std::runtime_error("Error: String is not numeric");
				arr[i -1] = std::stoi(argv[i]);
				if (arr[i - 1] < 0)
					throw std::runtime_error("Error");
			}
			catch(std::invalid_argument &e){
				std::cout << e.what() << std::endl;
				return 1;	
			}
			catch(std::out_of_range &e){
				std::cout << e.what() << std::endl;
				return 1;	
			}
			catch (const std::exception& e) {
				std::cout << e.what() << std::endl;
				return 1;
			}
        }
        PmergeMe *sort1 = new PmergeMe(arr, argc-1);
        delete sort1;
        
    }

}
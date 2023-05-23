/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:15:01 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/23 22:02:59 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    
    if(argc > 0)
    {
        int arr[argc -1];
        for(int i = 1; i < (argc -  1); i++)
        {
            try {
				arr[i] = std::stoi(argv[i]);
				if (arr[i] < 0)
				{
					std::cerr << "Error" << std::endl;
					return 1;
				}	
			}
			catch(std::invalid_argument &e){
				std::cout << e.what() << std::endl;
				return 1;	
			}
			catch(std::out_of_range &e){
				std::cout << e.what() << std::endl;
				return 1;	
			}
        }
        PmergeMe *sort1 = new PmergeMe(arr, argc-1);
        delete sort1;
        
    }

}
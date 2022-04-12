/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactlist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:53:13 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/12 12:18:10 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int     main(void)
{
    std::string reponse;
    Phonebook pb;

    while(std::cout << "PHONEBOOK: ADD - SEARCH - EXIT" << std::endl && std::getline(std::cin, reponse))
    {
        
        if(reponse.compare("ADD") == 0)
            pb.add();
        else if(reponse.compare("SEARCH") == 0)
            pb.search();
        else if (reponse.compare("EXIT") == 0)
			exit(0);
    }
    return(0);
}
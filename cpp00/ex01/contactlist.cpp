/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactlist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:53:13 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/06 18:37:57 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int     main(void)
{
    std::string reponse;
    Phonebook pb;

    do{
        std::cout << "PHONEBOOK: ADD - SEARCH - EXIT" << std::endl;
        std::cin >> reponse;
        if(reponse.compare("ADD") == 0)
            pb.add();
        else if(reponse.compare("SEARCH") == 0)
            pb.search();
        else if (reponse.compare("EXIT") == 0)
			exit(0);
    }while(std::getline(std::cin, reponse));
    return(0);
}
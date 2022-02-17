/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:54:07 by msantos-          #+#    #+#             */
/*   Updated: 2021/12/08 22:30:35 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
    {
        if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
    }
    return str;
}

void    writespaces(int nspaces)
{
    for(int i = 0; i < nspaces; i++)
    {
        std::cout << " ";
    }
}

int     main(void)
{
    std::string reponse;
    Phonebook Phonebook[8];
    
    int ncontact;

    ncontact = 0;
    do{
        std::cout << "PHONEBOOK: ADD - SEARCH - EXIT" << std::endl;
        std::cin >> reponse;
        if(reponse.compare("ADD") == 0)
        {
            std::cout << "First Name" << std::endl;
            std::cin >>  Phonebook[ncontact].first_name;
            std::cout << "Last Name" << std::endl;
            std::cin >>  Phonebook[ncontact].last_name;
            std::cout << "NickName" << std::endl;
            std::cin >>  Phonebook[ncontact].nickname;
            std::cout << "PhoneNumber" << std::endl;
            std::cin >>  Phonebook[ncontact].phone_number;
            std::cout << "Darkest_secret" << std::endl;
            std::cin >>  Phonebook[ncontact].darkest_secret;
            if(ncontact < 7)
                ncontact++;
        }
        else if(reponse.compare("SEARCH") == 0){
            std::cout << "| Frst_name  ";
            std::cout << "| Last_name  ";
            std::cout << "| Nickname   ";
            std::cout << "| Phone_num  " << std::endl;
            for(int i = 0; i < 8 ; i++)
            {
                if(!Phonebook[i].first_name.empty())
                {
                    
                    std::cout << "| " << truncate(Phonebook[i].first_name,10);
                    writespaces(11 - Phonebook[i].first_name.length());
                    std::cout << "| " << truncate(Phonebook[i].last_name,10);
                    writespaces(11 - Phonebook[i].last_name.length());
                    std::cout << "| " << truncate(Phonebook[i].nickname,10);
                    writespaces(11 - Phonebook[i].nickname.length());
                    std::cout << "| " << truncate(Phonebook[i].phone_number,10) << std::endl;
                }
                
            }
            
        }
        
    }while(reponse.compare("EXIT") != 0);
    return(0);
}
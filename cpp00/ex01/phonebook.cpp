/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:54:07 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/06 18:36:03 by msantos-         ###   ########.fr       */
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

void    Phonebook::add()
{

		// void		setName(std::string name);
		// std::string	getName(void);
		// void		setLastname(std::string lastname);
		// std::string	getLastname(void);
		// void		setNickname(std::string nickname);
		// std::string	getNickname(void);
		// void		setPhone(std::string phone);
		// std::string	getPhone(void);
		// void		setDarkestsecret(std::string darkest_secret);
		// std::string	getDarkestsecret(void);
    std::string buff;
    std::cout << "First Name" << std::endl;
    std::getline(std::cin, buff);
    this->contacts[this->nContacts].setName(buff);
    std::cout << "Last Name" << std::endl;
    std::getline(std::cin, buff);
    this->contacts[this->nContacts].setLastName(buff);
    std::cout << "NickName" << std::endl;
    std::getline(std::cin, buff);
    this->contacts[this->nContacts].setNickName(buff);
    std::cout << "PhoneNumber" << std::endl;
    std::getline(std::cin, buff);
    this->contacts[this->nContacts].setPhone(buff);
    std::cout << "Darkest_secret" << std::endl;
    std::getline(std::cin, buff);
    this->contacts[this->nContacts].setDarkestsecret(buff);
    if(this->nContacts < 7)
        this->nContacts++;
}

void    Phonebook::search()
{
    std::cout << "| First_name  ";
    std::cout << "| Last_name  ";
    std::cout << "| Nickname   ";
    std::cout << "| Phone_num  " << std::endl;
    for(int i = 0; i < this->nContacts ; i++)
    {
        std::cout << "| " << truncate(this->contacts[i].getName(),10);
        writespaces(11 - this->contacts[i].getName().length());
        std::cout << "| " << truncate(this->contacts[i].getLastName(),10);
        writespaces(11 - this->contacts[i].getLastName().length());
        std::cout << "| " << truncate(this->contacts[i].getNickName(),10);
        writespaces(11 - this->contacts[i].getNickName().length());
        std::cout << "| " << truncate(this->contacts[i].getPhone(),10) << std::endl;
        
    }
}
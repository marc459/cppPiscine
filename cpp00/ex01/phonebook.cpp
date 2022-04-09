/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:54:07 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/09 22:54:56 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
    
}

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

void    Phonebook::add(void)
{
    std::string buff;
	std::cout << "Name: ";
	std::getline(std::cin, buff);
	if (buff.length() > 10)
		buff = buff.substr(0, 9) + ".";
	this->contacts[this->nContacts % 8].setName(buff);
	std::cout << "Last Name: ";
	std::getline(std::cin, buff);
	if (buff.length() > 10)
		buff = buff.substr(0, 9) + ".";
	this->contacts[this->nContacts % 8].setLastName(buff);
	std::cout << "Nickname: ";
	std::getline(std::cin, buff);
	if (buff.length() > 10)
		buff = buff.substr(0, 9) + ".";
	this->contacts[this->nContacts % 8].setNickName(buff);
	std::cout << "Phone: ";
	std::getline(std::cin, buff);
	if (buff.length() > 10)
		buff = buff.substr(0, 9) + ".";
	this->contacts[this->nContacts % 8].setPhone(buff);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, buff);
	if (buff.length() > 10)
		buff = buff.substr(0, 9) + ".";
	this->contacts[this->nContacts % 8].setDarkestsecret(buff);
    this->nContacts++;
}

void    Phonebook::search()
{
    std::string buff;
    int num;
    std::cout << "| Index      | First_name | Last_name  | Nickname   "<< std::endl;
    if(this->nContacts >= 8)
        num = 8;
    else 
        num = this->nContacts;
    for(int i = 0; i < num; i++)
    {
        //nwidth
        std::cout << "| " << i;
        writespaces(10);
        std::cout << "| " << truncate(this->contacts[i].getName(),10);
        writespaces(11 - this->contacts[i].getName().length());
        std::cout << "| " << truncate(this->contacts[i].getLastName(),10);
        writespaces(11 - this->contacts[i].getLastName().length());
        std::cout << "| " << truncate(this->contacts[i].getNickName(),10) << std::endl;
        
    }
    std::cout << "Select a contact: " << std::endl;
    std::getline(std::cin, buff);
    if(buff.size() > 2 || buff[0] < 48 || buff[0] > 55)
    	std::cout << "Not a valid value" << std::endl;
	else
	{
		num = stoi(buff);
        std::cout << "| First_name | Last_name  | Nickname   | Phone      | Secret     " << std::endl;
		std::cout << "| " << truncate(this->contacts[num].getName(),10);
        writespaces(11 - this->contacts[num].getName().length());
        std::cout << "| " << truncate(this->contacts[num].getLastName(),10);
        writespaces(11 - this->contacts[num].getLastName().length());
        std::cout << "| " << truncate(this->contacts[num].getNickName(),10);
        writespaces(11 - this->contacts[num].getNickName().length());
        std::cout << "| " << truncate(this->contacts[num].getPhone(),10);
        writespaces(11 - this->contacts[num].getPhone().length());
        std::cout << "| " << truncate(this->contacts[num].getDarkestsecret(),10) << std::endl;
        
	}

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:54:07 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/09 23:03:20 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
    
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
        std::cout << "|" << std::setw(10) << i << "|"
		<< std::setw(10) << this->contacts[i].getName() << "|"
		<< std::setw(10) << this->contacts[i].getLastName() << "|"
		<< std::setw(10) << this->contacts[i].getNickName() << "|"<< std::endl;
        
    }
    std::cout << "Select a contact: " << std::endl;
    std::getline(std::cin, buff);
    if(buff.size() > 2 || buff[0] < 48 || buff[0] > 55)
    	std::cout << "Not a valid value" << std::endl;
	else
	{
		num = stoi(buff);
        std::cout << "| First_name | Last_name  | Nickname   | Phone      | Secret     " << std::endl;
		std::cout << "|" << std::setw(10) << this->contacts[num].getName() 
        << "|" << std::setw(10) << this->contacts[num].getLastName() << "|"
        << std::setw(10) << this->contacts[num].getNickName() << "|"
        << std::setw(10) << this->contacts[num].getPhone() << "|"
        << std::setw(10) << this->contacts[num].getDarkestsecret() << "|" << std::endl;
        
	}

}
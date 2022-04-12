/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:54:07 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/12 13:57:18 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
#include <stdio.h> 
#include <stdlib.h>

Phonebook::Phonebook() : nContacts(0)
{
    
}
Phonebook::~Phonebook()
{
    
}


int	Phonebook::ft_atoi(const char *str)
{
	unsigned int	i;
	int				minus;
	long			value;

	value = 0;
	minus = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		minus++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] <= 57 && str[i] >= 48)
	{
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	if (minus == 1)
		value = value * -1;
	return (value);
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
    std::cout << "|      Index | First_name |  Last_name |   Nickname |"<< std::endl;
    if(this->nContacts >= 8)
        num = 8;
    else
	{
        num = this->nContacts;
	}
    for(int i = 0; i < num; i++)
    {
        std::cout << "|" << std::setw(11) << i << " |"
		<< std::setw(11) << this->contacts[i].getName() <<  " |"
		<<  std::setw(11) << this->contacts[i].getLastName() << " |"
		<< std::setw(11) << this->contacts[i].getNickName()  << " |"<< std::endl;
        
    }
    std::cout << "Select a contact: " << std::endl;
    std::getline(std::cin, buff);
	num = 0;
    if(buff.size() > 2 || buff[0] < 48 || buff[0] > 55)
    	std::cout << "Not a valid value" << std::endl;
	else if(this->ft_atoi(buff.c_str()) >= this->nContacts || this->ft_atoi(buff.c_str()) > 7)
			std::cout << "Not a valid value" << std::endl;
	else
	{
		
		num = this->ft_atoi(buff.c_str());
        std::cout << "| First_name |  Last_name |   Nickname |      Phone |     Secret |" << std::endl;
		std::cout << "|" << std::setw(11)  << this->contacts[num].getName() 
        << " |" << std::setw(11) << this->contacts[num].getLastName()
        << " |" << std::setw(11) << this->contacts[num].getNickName() 
        << " |" << std::setw(11) << this->contacts[num].getPhone()
        << " |" << std::setw(11) << this->contacts[num].getDarkestsecret() << "|" << std::endl;
        
	}

}
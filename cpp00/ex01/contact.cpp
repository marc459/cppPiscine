/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:23:54 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/12 12:18:52 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setName(std::string name)
{
	this->name = name;
}

std::string	Contact::getName(void)
{
	return (this->name);
}

void	Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

std::string	Contact::getLastName(void)
{
	return (this->last_name);
}

void		Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getNickName(void)
{
	return (this->nickname);
}

void		Contact::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string	Contact::getPhone(void)
{
	return (this->phone);
}

void		Contact::setDarkestsecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::getDarkestsecret(void)
{
	return (this->darkest_secret);
}
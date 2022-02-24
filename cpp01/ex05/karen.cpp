/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:00:04 by marcos            #+#    #+#             */
/*   Updated: 2022/02/24 14:41:28 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

Karen::Karen(void)
{
	std::cout << "Constructor called" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love" <<
		" to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup" <<
		" burger. I just love it!." << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot" <<
		" believe adding extra bacon cost more money. You don’t put enough! If you" <<
		" did I would not have to ask for it!." << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." <<
		" I’ve been coming here for years and you just started working here last" <<
		" month..." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*f[4])(void);

	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*f[i])();
	}
}


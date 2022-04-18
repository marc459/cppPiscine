/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:04:33 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 10:28:00 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:35 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 11:04:51 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>
#include "HumanA.hpp"
#include "HumanB.hpp"

int    main(int argc, char **argv)
{
    
    {
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.HumanA::attack();
		club.setType("some other type of club");
		bob.HumanA::attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.HumanB::attack();
		jim.HumanB::setWeapon(club);
		jim.HumanB::attack();
		club.setType("some other type of club");
		jim.HumanB::attack();
	}
}
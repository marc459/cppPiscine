/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/03/02 14:13:27 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int    main(int argc, char **argv)
{
	ClapTrap	clap("alfonso");
	ScavTrap	clap2("alfonso2");
	
	std::cout << clap.getEnergyPoints()<< std::endl;
	clap.attack("antonio");
	clap2.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap2.guardGate();
	return 0;
}
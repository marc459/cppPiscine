/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/03/02 14:41:08 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int    main(int argc, char **argv)
{
	ClapTrap	clap("alfonso1");
	ScavTrap	clap2("alfonso2");
	FragTrap	clap3("alfonso3");
	
	std::cout << clap.getEnergyPoints()<< std::endl;
	clap.attack("antonio");
	clap2.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap2.guardGate();
	clap3.highFivesGuys();
	return 0;
}
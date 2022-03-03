/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/03/03 17:03:57 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int    main(void )
{
	ClapTrap	clap("alfonso1");
	ClapTrap	clapcp;
	ScavTrap	clap2("alfonso2");
	FragTrap	clap3("alfonso3");
	std::cout << "diamond trap"<< std::endl;
	DiamondTrap  clap4("alfonso4");

	clapcp = clap;
	std::cout << clapcp.getName() << std::endl;
	
	std::cout << clap.getEnergyPoints()<< std::endl;
	clap.attack("antonio");
	clap2.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap2.guardGate();
	clap3.highFivesGuys();

	
	
	return 0;
}
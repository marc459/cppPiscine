/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/05/03 14:10:14 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int    main(void )
{
	ClapTrap	clap("alfonso1");
	ScavTrap	clap2("alfonso2");
	FragTrap	clap3("alfonso3");
	DiamondTrap  clap4("alfonso4");

	clap.attack("antonio");
	clap4.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	clap4.guardGate();
	clap4.highFivesGuys();
	clap4.whoAmI();

	
	
	return 0;
}
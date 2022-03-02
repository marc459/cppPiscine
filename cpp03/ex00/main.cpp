/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/03/02 11:14:16 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int    main(int argc, char **argv)
{
ClapTrap	clap("alfonso");

	ClapTrap b(clap);
	b = clap;
	b = b;
	clap.attack("antonio");
	clap.takeDamage(3);
	clap.beRepaired(5);
	return 0;

    

}
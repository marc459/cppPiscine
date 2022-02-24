/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:20 by marcos            #+#    #+#             */
/*   Updated: 2022/02/24 15:19:16 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int    main(int argc, char **argv)
{
    int karenlevel;
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    Karen karen;
    if (argc != 2)
    {
        std::cout << "Needs more args" << std::endl;
        return (1);

    }
    for (int i = 0; i < sizeof(levels)/sizeof(levels[0]);i++)
    {
        if(levels[i] == (std::string)argv[1])
            karenlevel = i;
    }
    
    switch(karenlevel)
    {
        case 0:
            karen.complain("DEBUG");
            break ;
        case 1:
            karen.complain("INFO");
            break ;
        case 2:
            karen.complain("WARNING");
            break ;
        case 3:
            karen.complain("ERROR");
            break ;
        default:
            std::cout << "complaining" << std::endl;
    }

	return (0);
}
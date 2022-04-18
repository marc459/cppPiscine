/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:20 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 11:54:53 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int    main(int argc, char **argv)
{
    Karen	karen;

	karen.complain("DEBUG");
    std::cout << std::endl;
    karen.complain("INFO");
    std::cout << std::endl;
    karen.complain("WARNING");
    std::cout << std::endl;
    karen.complain("ERROR");
}
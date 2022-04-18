/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:20 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 10:52:43 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int    main(int argc, char **argv)
{
    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str adress        " << &str << std::endl;
    std::cout << "stringPTR address " << stringPTR << std::endl;
    std::cout << "stringREF address " << &stringREF << std::endl;

    std::cout << "stringPTR content " << *stringPTR << std::endl;
    std::cout << "stringREF content " << stringREF << std::endl;
    
}
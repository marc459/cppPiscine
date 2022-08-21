/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/21 19:56:34 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
        try
    {
        Span array1(3);


        array1.AddNumber(4);
        array1.AddNumber(5);
        array1.AddNumber(6);

        std::cout << array1 << std::endl;
        array1.AddNumber(7);

    

        std::cout << array1 << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}
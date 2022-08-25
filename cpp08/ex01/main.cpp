/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/25 20:20:42 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    try
    {
        //Span sp(5);
        Span	sp2(10);
        


        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::vector<int>::iterator	itb = sp.getList().begin();
	    std::vector<int>::iterator	ite = sp.getList().end();
        sp2.addNumber(itb,ite);
        sp2.addNumber(4);
        std::cout << "sp2" << sp2 << std::endl;
        std::cout << "sp" << sp << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}

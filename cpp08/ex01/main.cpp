/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/09/06 18:10:12 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <limits.h>

int main()
{
    try
    {
        Span sp = Span(5);
        Span	sp2(10);

        sp.addNumber(1);
        sp.addNumber(-27);
        sp.addNumber(5);
        sp.addNumber(3);
        
        std::vector<int>::iterator	itb = sp.getList().begin();
	    std::vector<int>::iterator	ite = sp.getList().end() -1;
        sp2.addNumber(itb,ite);
        sp2.addNumber(4);
        std::cout << "sp" << sp << std::endl;
        std::cout << "sp2" << sp2 << std::endl;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}


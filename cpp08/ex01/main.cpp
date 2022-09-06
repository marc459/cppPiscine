/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/09/06 16:39:53 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        Span	sp2(10);
        
        sp.addNumber(1);
        sp.addNumber(-27);
        sp.addNumber(5);
        sp.addNumber(2147);
        
        std::vector<int>::iterator	itb = sp.getList().begin();
	    std::vector<int>::iterator	ite = sp.getList().end();
        sp2.addNumber(itb,ite);
        sp2.addNumber(4);
        std::cout << "sp" << sp << std::endl;
        std::cout << "sp2" << sp2 << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}


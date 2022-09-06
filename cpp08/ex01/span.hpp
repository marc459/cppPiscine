/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:21:20 by msantos-          #+#    #+#             */
/*   Updated: 2022/09/06 16:37:01 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string.h>
#include <exception>
# include <vector>
# include <algorithm>
# include <cmath>
#include <stdint.h>
class Span{
    public:
        std::vector <int>intVector;
        unsigned int  filledout;

    public:
    Span();
    Span(unsigned int l);
    Span(Span const &cp);
    ~Span();
    Span &operator=( Span const &cp);
    void addNumber(int nb);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    std::vector<int>&	getList(void);
    long long shortestSpan();
    long long longestSpan();


    class	ArrayFullException : public std::exception
    {
        virtual const char * what() const throw();
    };
    class	noSpanException : public std::exception
    {
        virtual const char * what() const throw();
    };

    
};
std::ostream&	operator << (std::ostream &os, Span &form);

#endif
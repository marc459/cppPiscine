/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:21:20 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/21 22:05:26 by msantos-         ###   ########.fr       */
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

class Span{
    public:
        std::vector <int>intVector;

        unsigned long  filledout;

    public:
    Span();
    Span(unsigned int l);
    Span(Span &cp);
    ~Span();
    Span &operator=( Span const &cp);
    void addNumber(int nb);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();


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
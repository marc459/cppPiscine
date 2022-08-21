/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:21:20 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/21 20:10:17 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string.h>
#include <exception>

class Span{
    public:
        int *array;
        int len;
        int filledout;

    public:
    Span();
    Span(unsigned int l);
    Span(Span &cp);
    ~Span();
    Span &operator=( Span const &cp);
    void AddNumber(int nb);
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
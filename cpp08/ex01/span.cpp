/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:19:19 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/24 17:27:24 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

    Span::Span() : filledout(0)
    {
        this->it = this->intVector.begin();
    }

    
    
    Span::Span(unsigned int l) : filledout(0)
    {
        if(l < 0)
            throw Span::ArrayFullException();
        this->intVector = std::vector<int>(l, 0);
        this->it = this->intVector.begin();
    }
    
    Span::Span(Span &cp)
    {
        this->it = cp.it;
        this->filledout = cp.filledout;
        this->intVector = cp.intVector;
    }

    Span::~Span()
    {
    }
    
    Span &Span::operator=( Span const &cp)
    {
        this->it = cp.it;
        this->filledout = cp.filledout;
        this->intVector = cp.intVector;
        
        return *this;
    }
    void Span::addNumber(int nb)
    {
        (void)nb;

        if(filledout < this->intVector.size())
        {
            
            this->intVector[filledout] = nb;
            this->filledout++;
            this->it++;

        }
        else
            throw Span::ArrayFullException();

    }

    void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
    {
        if(filledout < this->intVector.size())
        {
            while(begin != end)
            {
                this->intVector[filledout] = *begin;
                this->filledout++;
                begin++;
            }
        }
        else
            throw Span::ArrayFullException();
    }
    
    int Span::shortestSpan()
    {
        if (this->filledout <= 1)
            throw Span::noSpanException();
        int min;
        min = this->intVector[0];
        for(std::vector<int>::iterator it = this->intVector.begin(); it != this->intVector.end(); it++)
        {
            if(*it < min)
                min = *it;
        }
        return min;
        
    }

    int Span::longestSpan()
    {
        if (this->filledout <= 1)
            throw Span::noSpanException();
        int max;
        max = this->intVector[0];
        for(std::vector<int>::iterator it = this->intVector.begin(); it != this->intVector.end(); it++)
        {
            if(*it > max)
                max = *it;
        }
        return max;
        
    }
    std::vector<int>&	Span::getList(void) {return (this->intVector);};
    const char *Span::ArrayFullException::what() const throw()
    {
        return "Error: Array is full";
    }
        const char *Span::noSpanException::what() const throw()
    {
        return "Error: No span to find";
    }
    std::ostream&	operator << (std::ostream &os, Span &sp)
{
    for(std::vector<int>::iterator it = sp.intVector.begin(); it != sp.intVector.end(); it++ ) os << " " << *it <<  " ";
	return (os);
}

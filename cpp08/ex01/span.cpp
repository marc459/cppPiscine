/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:19:19 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/30 12:39:23 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

    Span::Span() : filledout(0)
    {
    }

    
    
    Span::Span(unsigned int l) : filledout(0)
    {
        this->intVector = std::vector<int>(l, 0);
    }
    
    Span::Span(Span const &cp)
    {
        this->filledout = cp.filledout;
        this->intVector = cp.intVector;

    }

    Span::~Span()
    {
    }
    
    Span &Span::operator=( Span const &cp)
    {
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

        }
        else
            throw Span::ArrayFullException();

    }

    void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
    {
       
        while(begin != end)
        {
            if(filledout < this->intVector.size())
            {
                this->intVector[filledout] = *begin;
                this->filledout++;
                begin++;
            }
            else
                throw Span::ArrayFullException();
        }

    }
    
    int Span::shortestSpan()
    {
        if (this->filledout <= 1)
            throw Span::noSpanException();
        int min;
        min = this->intVector[0];
        for(unsigned int i = 0; i < this->filledout; i++)
        {
            if(this->intVector[i] < min)
                min = this->intVector[i];
        }
        return min;
        
    }

    int Span::longestSpan()
    {
        if (this->filledout <= 1)
            throw Span::noSpanException();
        int max;
        max = this->intVector[0];
        for(unsigned int i = 0; i < this->filledout; i++)
        {
            if(this->intVector[i] > max)
                max = this->intVector[i];
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

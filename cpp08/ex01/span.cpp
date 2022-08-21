/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:19:19 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/21 22:40:20 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

    Span::Span(): filledout(0)
    {

    }
    
    Span::Span(unsigned int l) :filledout(0)
    {
        if(l < 0)
            throw Span::ArrayFullException();
        this->intVector = std::vector<int>(l, 0);
    }
    
    Span::Span(Span &cp)
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
        std::cout << "size "<< this->intVector.size();
        if(filledout < this->intVector.size())
        {
            this->intVector.insert(this->filledout,nb);
            this->filledout++;
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
                this->intVector.push_back(*begin);
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
            if(*it < max)
                max = *it;
        }
        return max;
        
    }
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
	os << "Array : " << std::endl;
    for(unsigned long i = 0; i < sp.filledout; i++ ) os << " " << sp.intVector[i] <<  " ";
	return (os);
}

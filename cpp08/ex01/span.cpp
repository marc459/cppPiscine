/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:19:19 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/21 20:11:35 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

    Span::Span(): len(0), filledout(0)
    {
        this->array = new int[0];
    }
    Span::Span(unsigned int l) :filledout(0)
    {
        if(l < 0)
            throw Span::ArrayFullException();
        this->len = l;
        this->array = new int[l];
    }
    Span::Span(Span &cp)
    {
        this->array = new int[cp.len];
        this->len = cp.len;
        this->filledout = cp.filledout;
        for ( int i = 0; i < this->len; i++)
            this->array[i] = cp.array[i];
        
    }
    Span::~Span()
    {
        delete [] this->array;
    }
    Span &Span::operator=( Span const &cp)
    {
        this->array = new int[cp.len];
        this->len = cp.len;
        this->filledout = cp.filledout;
        for ( int i = 0; i < this->len; i++)
            this->array[i] = cp.array[i];
        
        return *this;
    }
    void Span::AddNumber(int nb)
    {

        if(filledout < len)
        {
            this->array[filledout] = nb;
            this->filledout++;
        }
        else
            throw Span::ArrayFullException();

    }
    
    int Span::shortestSpan()
    {
        if (this->filledout <= 1)
            throw Span::noSpanException();
        int min;
        min = this->array[0];
        for(int i = 0; i < this->filledout; i++ )
        {
            if(this->array[i] < min)
                min = this->array[i];
        }
        return min;
        
    }

    int Span::longestSpan()
    {
        if (this->filledout <= 1)
            throw Span::noSpanException();
        int max;
        max = this->array[0];
        for(int i = 0; i < this->filledout; i++ )
        {
            if(this->array[i] > max)
                max = this->array[i];
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
    for(int i = 0; i < sp.filledout; i++ ) os << " " << sp.array[i] <<  " ";
	return (os);
}

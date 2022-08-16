/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:01 by marcos            #+#    #+#             */
/*   Updated: 2022/08/16 17:26:18 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <string>
# include <iostream>

template <class T>
class Array {
  private:
    T *array;
    int len;

  public:
    Array() : len(0)
    {
        this->array = new T[0];
    }
    Array(int l)
    {

        if(l < 0)
            throw exception();
        this->len = l;
        this->array = new T[l];
    }
    Array(Array &cp)
    {
        this->array = new T[cp.len];
        this->len = cp.len;
        for ( int i = 0; i < Array::size(); i++)
            this->array[i] = cp.array[i];
        
    }
    ~Array()
    {
        delete [] this->array;
    }
    Array &operator=( Array const &cp)
    {
        this->array = new T[cp.len];
        this->len = cp.len;
        for ( int i = 0; i < Array::size(); i++)
            this->array[i] = cp.array[i];
        
        return *this;
    }
    T   &operator[](int pos)
    {
        if (pos >= Array::size() || pos < 0)
            throw exception();
        return this->array[pos];
    }
    T  &operator[](int pos) const
    {
        int len = Array::size();
        if (pos >= len || pos < 0)
            throw exception();
        return this->array[pos];
    }
    
    int size() const
    {
        return this->len;
    }
     class	exception : public std::exception
    {
        virtual const char * what() const throw()
        {
            return "Error: Position does not exist";
        }
    };

};




#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:01 by marcos            #+#    #+#             */
/*   Updated: 2022/08/11 22:54:03 by msantos-         ###   ########.fr       */
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

  public:
    Array()
    {
        this->array = new T[0];
    }
    Array(unsigned int n)
    {
        this->array = new T[n];
    }
    Array(Array &cp)
    {
        this->array = cp->array;
    }
    ~Array()
    {
        delete [] this->array;
    }
    Array &operator=( Array const &assig)
    {

        for ( int i = 0; i < Array::size(); i++)
        {
            
            this->array[i] = assig.array[i];
            
        }
            
        return *this;
    }
    T   &operator[](int pos)
    {
        if (pos > Array::size() || pos < 0)
            throw Exception();
            return this->array[pos];
    }
    int size() const
    {
        int i;

        i = 0;
        while(this->array[i])
            i++;
        return i;
    }
     class	Exception : public std::exception
    {
        virtual const char * what() const throw()
        {
            return "Error: Position does not exist";
        }
    };

};




#endif
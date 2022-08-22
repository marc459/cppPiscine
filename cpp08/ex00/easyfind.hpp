/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:18:29 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/22 18:20:17 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define WHATEVER_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string.h>
#include <exception>


class notfoundException: virtual public std::exception {
    
protected:

    
public:

    notfoundException() {}
    virtual const char* what() const throw () {
       return "Exception: Value cannot be found";
    }
    

};

template <class T>
typename T::iterator easyfind (T a, int b) {


    for(typename T::iterator i = a.begin(); i != a.end(); i++)
    {
        if(*i == b)
            return i;
    }
    throw(notfoundException());
}



#endif
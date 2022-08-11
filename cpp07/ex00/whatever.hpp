/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:13:54 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/11 15:08:28 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string.h>
#include <math.h>

template <class T>
void swap (T &a, T &b) {
  T tmp;

  tmp = a;
  a = b;
  b = tmp;
}
template <class T>
T min (T a, T b) {
  if(a < b)
    return a;
  else
    return b;
  
}

template <class T>
T max (T a, T b) {
  if(a > b)
    return a;
  else
    return b;
  
}


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:21:40 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/10 12:26:03 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <ctime>
#include <string>
#include <vector>
#include <deque>
#include <sstream>

class PmergeMe{
    private:
        PmergeMe();
        void vecmerge( int beg, int mid, int end);
        void vecmergesort( int beg, int end);
        void printvecval();
        
    public:
        std::deque<int> d;
        std::vector<int> v;

        PmergeMe(std::string expresion);
        ~PmergeMe();
};

#endif
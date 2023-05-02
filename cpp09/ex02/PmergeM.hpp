/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeM.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:21:40 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/02 19:33:25 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEM_HPP
#define PMERGEM_HPP
#include <iostream>
#include <exception>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <deque>

class PmergeM{
    private:
        PmergeM();
        
    public:
        struct timer
        {
            clock_t	start;
            clock_t	vectortimer;
            clock_t	dequetimer;
        };
        
        std::deque<int> d;
        std::vector<int> v;
        void	sortDeque();
        void	sortVector();

        PmergeM(std::string expresion);
        ~PmergeM();
};

#endif
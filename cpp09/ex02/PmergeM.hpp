/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeM.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:21:40 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/01 22:03:38 by msantos-         ###   ########.fr       */
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

        void	sort(char **argv);

        PmergeM();
        ~PmergeM();
};

#endif
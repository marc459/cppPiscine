/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/21 16:56:45 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
int main(void)
{
    try
    {

        std::vector<int>	vector;
        std::list<int>		list;
        std::deque<int>		deque;
        
        vector.push_back(1);
        vector.push_back(2);
        vector.push_back(30);
        list.push_back(5);
        list.push_back(24);
        list.push_back(23);
        deque.push_back(2);
        deque.push_back(44);
        deque.push_back(459);
        std::cout << *easyfind(vector,2) << std::endl;
        std::cout << *easyfind(list,24) << std::endl;
        std::cout <<  *easyfind(deque,888) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
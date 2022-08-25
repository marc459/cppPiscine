/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:52:07 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/24 19:19:55 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string.h>
#include <exception>
# include <vector>
# include <stack>
# include <list>

template <typename T>
class MutantStack: public std::stack<T>{
    public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		MutantStack() : std::stack<T>(){};
		MutantStack( const MutantStack<T> & other ) : std::stack<T>(other) {};
		virtual	~MutantStack(){};

		MutantStack & operator=( const MutantStack<T> & other )
		{
			std::stack<T>::operator=(other);
			return *this;
		}

	iterator	begin()
	{
		return this->c.begin();
	};

	iterator	end()
	{
		return this->c.end();
	};
	

	reverse_iterator	rbegin()
	{
		return this->c.rbegin();
	};
	
	reverse_iterator	rend()
	{
		return this->c.rend();
	};

    
};


#endif
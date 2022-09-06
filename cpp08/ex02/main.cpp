/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/09/06 17:50:09 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout <<  mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

    
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

    MutantStack<int> mstack2;
    mstack2.push(0);
    mstack2.push(0);
    mstack2.push(0);
    mstack2.push(0);
    mstack2.push(0);

    int i = 0;
    for (MutantStack<int>::reverse_iterator rit = mstack2.rbegin(); rit!= mstack2.rend(); ++rit)
        *rit = ++i;
    for (MutantStack<int>::iterator it = mstack2.begin(); it != mstack2.end(); ++it)
        std::cout << *it << " ";
	return 0;
}

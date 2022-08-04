/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/04 13:56:10 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <iostream>
#include <math.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
Base *generate(void)
{
	srand(time(NULL));
	int rand = std::rand() % 3;
	std::cout << rand << std::endl;
	Base *foo;
	switch(rand)
	{
		case 0:
			foo = new A();
			break;
		case 1:
			foo = new B();
			break;
		case 2:
			foo = new C();
			break;
	}
	return foo;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A object by pointer." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B object by pointer." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C object by pointer." << std::endl;
	
}
void identify(Base &p)
{
 try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A object by reference." << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B object by reference." << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C object by reference." << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what()  << '\n';
			}
		}
	}
}

int main(void)
{
	//Base *c = new Base();
	Base	*p = generate();
	identify(p);
	identify(*p);
	delete p;

	return 0;
}
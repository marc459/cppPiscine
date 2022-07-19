/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 20:01:12 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{

	Intern	someRandom;
	Form*	form1;
	Form*	form2;
	Form*	form3;
	Form*	form4;

	try
	{
		Bureaucrat *a = new Bureaucrat("a", 1);
		form1 = someRandom.makeForm("shrubbery creation", "target1");
		form2 = someRandom.makeForm("robotomy request", "target2");
		form3 = someRandom.makeForm("presidential pardon", "target3");
		std::cout << *form1 << std::endl;
		std::cout << *form2 << std::endl;
		a->signForm(*form2);
		form2->execute(*a);
		std::cout << *form3 << std::endl;
		delete form1;
		delete form2;
		delete form3;

		form4 = someRandom.makeForm("aaaaa", "target");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return 0;
    
}
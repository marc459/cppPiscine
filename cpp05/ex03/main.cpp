/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 17:00:53 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{

	Intern	someRandom;
	Form*	scf;
	Form*	rrf;
	Form*	ppf;
	Form*	fake;

	try
	{
		scf = someRandom.makeForm("shrubbery creation", "House");
		rrf = someRandom.makeForm("robotomy request", "Bender");
		ppf = someRandom.makeForm("presidential pardon", "Criminal");
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		delete scf;
		delete rrf;
		delete ppf;
		fake = someRandom.makeForm("sdfkj", "Fake");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
    
}
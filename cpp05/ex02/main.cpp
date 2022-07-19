/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 13:56:20 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{

	try
	{
		Bureaucrat	bureaucrat("Fernando", 1);
		RobotomyRequestForm	pardon("Ballotelly");
		ShrubberyCreationForm pardon2("Ball");
		PresidentialPardonForm pardon3("presidential");

		std::cout << std::endl << std::endl << std::endl;

		bureaucrat.signForm(pardon);
		bureaucrat.executeForm(pardon);
		std::cout << std::endl;

		bureaucrat.signForm(pardon2);
		bureaucrat.executeForm(pardon2);
		std::cout << std::endl;

		bureaucrat.signForm(pardon3);
		bureaucrat.executeForm(pardon3);

		std::cout << std::endl << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/18 23:37:42 by marcos           ###   ########.fr       */
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

		bureaucrat.signForm(pardon);
		bureaucrat.executeForm(pardon);

		bureaucrat.signForm(pardon2);
		bureaucrat.executeForm(pardon2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
    
}
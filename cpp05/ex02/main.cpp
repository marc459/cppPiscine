/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 20:01:01 by msantos-         ###   ########.fr       */
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
		RobotomyRequestForm	form("Roboto");
		ShrubberyCreationForm form2("schu");
		PresidentialPardonForm form3("presidential");

		std::cout << std::endl << std::endl << std::endl;

		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
		std::cout << std::endl;

		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << std::endl;

		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);

		std::cout << std::endl << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
    
}
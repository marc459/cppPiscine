/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/03/29 21:30:03 by msantos-         ###   ########.fr       */
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

		bureaucrat.signForm(pardon);
		bureaucrat.executeForm(pardon);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
    
}
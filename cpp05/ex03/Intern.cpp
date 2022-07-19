/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:54:04 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 16:58:44 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Main Inter Constructor called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	(void) obj;
}

Intern::~Intern()
{
	std::cout << "Inter Destructor called" << std::endl;
}

Intern&	Intern::operator = (const Intern &intern)
{
	(void) intern;
	return (*this);
}

Form*	Intern::makeShrubberyForm(std::string targetForm)
{
	ShrubberyCreationForm	*shu = new ShrubberyCreationForm(targetForm);
	std::cout << "ShrubberyCreationForm." << std::endl;
	return (shu);
}

Form*	Intern::makeRobotomyForm(std::string targetForm)
{
	RobotomyRequestForm	*rob = new RobotomyRequestForm(targetForm);
	std::cout << "RobotomyRequestForm." << std::endl;
	return (rob);
}

Form*	Intern::makePresidentiaPardonForm(std::string targetForm)
{
	PresidentialPardonForm	*pres = new PresidentialPardonForm(targetForm);
	std::cout << "PresidentialPardonForm." << std::endl;
	return (pres);
}

Form*	Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string	options[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*arrPtr[])(std::string targetForm) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentiaPardonForm};
	int i = -1;

	while (i++ < 3)
		if (options[i] == nameForm)
			return ((this->*arrPtr[i])(targetForm));
	throw Intern::FormDoesntExistException();
}
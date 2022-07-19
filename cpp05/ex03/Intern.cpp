/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:54:04 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 19:12:37 by msantos-         ###   ########.fr       */
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

Form*	Intern::ShrubberyForm(std::string targetForm)
{
	ShrubberyCreationForm	*form = new ShrubberyCreationForm(targetForm);
	return (form);
}

Form*	Intern::RobotomyForm(std::string targetForm)
{
	RobotomyRequestForm	*form = new RobotomyRequestForm(targetForm);
	return (form);
}

Form*	Intern::PresidentiaPardonForm(std::string targetForm)
{
	PresidentialPardonForm	*form = new PresidentialPardonForm(targetForm);
	return (form);
}

const char *Intern::InexistentFormException::what() const throw() {
	return ("Form not known");
}



Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string	opts[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*refForms[])(std::string target) = {&Intern::ShrubberyForm, &Intern::RobotomyForm, &Intern::PresidentiaPardonForm};
	int i = 0;

	while (i < 3)
	{
		if (opts[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*refForms[i])(target));
		}
			
		i++;
	}
	throw Intern::InexistentFormException();
}
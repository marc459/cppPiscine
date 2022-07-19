/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:44:45 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 15:02:12 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op)
{

	this->target = op.target;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getisSigned())
		throw Form::formNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::gradeTooLowException();
	std::cout << "Drilling noises" << std::endl;
	std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
}

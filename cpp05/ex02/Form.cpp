/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:20:54 by msantos-          #+#    #+#             */
/*   Updated: 2022/03/29 21:33:27 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeSigned, int gradeExec): isSigned(false)
{
    if(gradeSigned > 150 || gradeExec > 150)
        throw Form::gradeTooLowException();
    else if(gradeSigned < 1 || gradeExec < 1)
        throw Form::gradeTooHighException();
    else{
        std::cout << "Form constructor called" << std::endl;
        this->setName(name);
        this->setGradeSigned(gradeSigned);
        this->setGradeExec(gradeExec);
    }
}

Form::Form(const Form &copy)
{
    std::cout << "Form copy constructor called" << std::endl;
    this->setName(copy.getName());
    this->setGradeSigned(copy.getGradeSigned());
    this->setGradeExec(copy.getGradeExec());
    this->setIsSigned(copy.getisSigned());
}

Form::~Form(void)
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &op)
{
    std::cout << "Form Assigment operator called" << std::endl;
    this->setName(op.getName());
    this->setGradeSigned(op.getGradeSigned());
    this->setGradeExec(op.getGradeExec());
    this->setIsSigned(op.getisSigned());
    return (*this);
}

int    Form::beSigned(const Bureaucrat &b){
    if(b.getGrade() < this->gradeSigned)
    {
        this->setIsSigned(true);
        return (0);
    }
    else
    {
        throw Form::gradeTooLowException();
        return (1);
    }
        
}

const char *Form::gradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Form::gradeTooLowException::what() const throw() {
	return "Grade too low";
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->isSigned == false)
		throw Form::gradeTooHighException(); //
	else if (executor.getGrade() > this->getGradeExec())
		throw Form::gradeTooHighException();
	else
		std::cout << "Executed " << this->getName() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:20:54 by msantos-          #+#    #+#             */
/*   Updated: 2022/03/08 20:02:35 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeSigned, int gradeExec): isSigned(false)
{
    if(gradeSigned > 150 || gradeExec > 150)
        throw Form::gradeTooLowException();
    else if(gradeSigned < 1 || gradeExec < 1)
        throw Form::gradeTooHighException();
    else{
        std::cout << "Form constructor called" << std::endl;
        this->setName(name);
        this->setGradeSigned(gradeSigned);
        this->setGradeExe(gradeExec);
    }
}

Form::Form(const Form &copy)
{
    std::cout << "Form copy constructor called" << std::endl;
    this->setName(copy.getName());
    this->setGradeSigned(copy.getGradeSigned());
    this->setGradeExe(copy.getGradeExe());
    this->setIsSigned(copy.isSigned());
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
    this->setGradeExe(op.getGradeExe());
    this->setIsSigned(op.isSigned());
    return (*this);
}

const char *Bureaucrat::gradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Bureaucrat::gradeTooLowException::what() const throw() {
	return "Grade too low";
}
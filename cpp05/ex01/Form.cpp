/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:20:54 by msantos-          #+#    #+#             */
/*   Updated: 2022/07/12 19:43:58 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeSigned, int gradeExec):   name(name), isSigned(false), gradeSigned(gradeSigned), gradeExec(gradeExec)
{
    if(gradeSigned > 150 || gradeExec > 150)
        throw Form::gradeTooLowException();
    else if(gradeSigned < 1 || gradeExec < 1)
        throw Form::gradeTooHighException();
    else{
        std::cout << "Form constructor called" << std::endl;
    }
}

Form::Form(const Form &copy): name(copy.name),isSigned(copy.isSigned), gradeSigned(copy.gradeSigned), gradeExec(copy.gradeExec)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &op)
{
    std::cout << "Form Assigment operator called" << std::endl;
    this->isSigned = op.getisSigned();
    return (*this);
}

int    Form::beSigned(const Bureaucrat &b){
    if(b.getGrade() > this->getGradeSigned())
    {
        throw Form::gradeTooLowException();
        return (1);
    }
    else
    {
        this->setIsSigned(true);
        return (0);
    }
        
}

std::ostream&	operator << (std::ostream &os, Form &form)
{
	os << "Form : " << form.getName()  << " IsSigned : " << form.getisSigned()  << " Grade to Sign: " << form.getGradeSigned()  << " Grade to Execute: " << form.getGradeExec() << std::endl;
	return (os);
}

const char *Form::gradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Form::gradeTooLowException::what() const throw() {
	return "Grade too low";
}

bool Form::getisSigned() const {
    return this->isSigned;
}

void Form::setIsSigned(bool isSigned) {
    this->isSigned = isSigned;
}

std::string Form::getName() const {
    return this->name;
}


int Form::getGradeSigned() const {
    return this->gradeSigned;
}

int Form::getGradeExec() const {
    return this->gradeExec;
}
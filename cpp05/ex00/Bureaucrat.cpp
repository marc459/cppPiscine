/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:14:31 by marcos            #+#    #+#             */
/*   Updated: 2022/07/12 17:30:20 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade)
{
    if(grade > 150)
        throw Bureaucrat::gradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::gradeTooHighException();
    else{
        std::cout << "Bureaucrat constructor called" << std::endl;
        
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;

}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op)
{
    std::cout << "Bureaucrat Assigment operator called" << std::endl;
    this->grade = op.getGrade();
    return (*this);
}

void Bureaucrat::IncrementGrade()
{
        if(this->grade > 1)
        {
            this->grade--;
        }
        else
            throw Bureaucrat::gradeTooHighException(); 
}
void Bureaucrat::DecrementGrade()
{
        if(this->grade < 150)
        {
            this->grade++;
        }
        else
            throw Bureaucrat::gradeTooLowException();

}
  
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os <<  "Bureaucrat " << b.getName() << " has " << b.getGrade() << " grade"<< std::endl;
    return (os);
}

const char *Bureaucrat::gradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Bureaucrat::gradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}
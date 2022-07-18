/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:14:31 by marcos            #+#    #+#             */
/*   Updated: 2022/07/18 20:40:52 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    if(grade > 150)
        throw Bureaucrat::gradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::gradeTooHighException();
    else{
        std::cout << "Bureaucrat constructor called" << std::endl;
        this->setName(name);
        
        this->setGrade(grade);
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    this->setName(copy.getName());
    this->setGrade(copy.getGrade());
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op)
{
    std::cout << "Bureaucrat Assigment operator called" << std::endl;
    this->setName(op.getName());
    this->setGrade(op.getGrade());
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

void Bureaucrat::signForm(Form &f)
{
    
    try
    {
        f.beSigned(*this);
        std::cout << this->getName() << " signs " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
    }
    
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}
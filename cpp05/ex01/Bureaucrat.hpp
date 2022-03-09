/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:14:35 by marcos            #+#    #+#             */
/*   Updated: 2022/03/09 19:23:26 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat{
    private:
        std::string name;
        int grade;

    public:
        Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		virtual	~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &op);

        class gradeTooHighException : public std::exception 
        {
		    public:
                virtual const char* what() const throw();
        };
        class gradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        void IncrementGrade();
        void DecrementGrade();
        void signForm( Form &f);

        std::string getName() const
        {
            return this->name;
        }
        void setName(std::string name)
        {
            this->name = name;
        }

        int getGrade() const
        {
            return this->grade;
        }
        void setGrade(int grade)
        {
            this->grade = grade;
        }
};

std::ostream& operator <<(std::ostream& os, const Bureaucrat& b);

#endif
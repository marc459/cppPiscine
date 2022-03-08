/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:14:35 by marcos            #+#    #+#             */
/*   Updated: 2022/03/08 14:38:25 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>


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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
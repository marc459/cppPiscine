/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:58:36 by msantos-          #+#    #+#             */
/*   Updated: 2022/07/19 21:54:58 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
    private:
        const std::string name;
        bool isSigned;
        const int gradeSigned;
        const int gradeExec;

    public:
        Form();
        Form(const std::string name, int gradeSigned, int gradeExec);
		Form(const Form &copy);
		virtual	~Form(void);
		Form &operator=(const Form &op);
        
        int    beSigned(const Bureaucrat &b);
        virtual void	execute(Bureaucrat const &executor) const = 0;

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
        class formNotSignedException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };

        bool getisSigned() const;

        void setIsSigned(bool isSigned);

        std::string getName() const;


        int getGradeSigned() const;
        int getGradeExec() const;

};

std::ostream&	operator << (std::ostream &os, Form &form);



#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:58:36 by msantos-          #+#    #+#             */
/*   Updated: 2022/03/08 19:51:44 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Form{
    private:
    std::string name;
        bool isSigned;
        int gradeSigned;
        int gradeExec;

    public:
       Form(const std::string name, int gradeSigned, int gradeExec);
		Form(constForm &copy);
		virtual	~Form(void);
		Form &operator=(constForm &op);

        class gradeTooHighException : std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        class gradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };

        bool isSigned() {
            return this.isSigned;
        }

        void setIsSigned(bool isSigned) {
            this.isSigned = isSigned;
        }

        std::string getName() {
            return this.name;
        }

        void setName(std::string name) {
            this.name = name;
        }

        int getGradeSigned() {
            return this.gradeSigned;
        }

        void setGradeSigned(int gradeSigned) {
            this.gradeSigned = gradeSigned;
        }

        int getGradeExec() {
            return this.gradeExec;
        }

        void setGradeExec(int gradeExec) {
            this.gradeExec = gradeExec;
        }
};

std::ostream& operator<<(std::ostream& os, const Form& b)
{
    os <<  "Form " << b.getName() << " is signed " << b.isSigned() << "and has " << b.getGradeSigned() << "signed grade" << std::endl;
    return (os);
}

#endif
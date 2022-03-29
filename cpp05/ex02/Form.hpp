/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:58:36 by msantos-          #+#    #+#             */
/*   Updated: 2022/03/29 21:28:35 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
    private:
    std::string name;
        bool isSigned;
        int gradeSigned;
        int gradeExec;

    public:
        Form(const std::string name, int gradeSigned, int gradeExec);
		Form(const Form &copy);
		virtual	~Form(void);
		Form &operator=(const Form &op);
        void execute(Bureaucrat const & executor) const;
        
        int    beSigned(const Bureaucrat &b);

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

        bool getisSigned() const {
            return this->isSigned;
        }

        void setIsSigned(bool isSigned) {
            this->isSigned = isSigned;
        }

        std::string getName() const {
            return this->name;
        }

        void setName(std::string name) {
            this->name = name;
        }

        int getGradeSigned() const {
            return this->gradeSigned;
        }

        void setGradeSigned(int gradeSigned) {
            this->gradeSigned = gradeSigned;
        }

        int getGradeExec() const {
            return this->gradeExec;
        }

        void setGradeExec(int gradeExec) {
            this->gradeExec = gradeExec;
        }
        
};
std::ostream	&operator<<(std::ostream &out, const Form &instance)
{
	out << instance.getName() << " , with execute grade " << instance.getGradeExec()
		<< " and grade to be signed " << instance.getGradeSigned() << " is signed "
		<< instance.getisSigned() << std::endl;
	return out;
}



#endif
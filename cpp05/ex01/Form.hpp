/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:58:36 by msantos-          #+#    #+#             */
/*   Updated: 2022/07/12 17:43:24 by msantos-         ###   ########.fr       */
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
        Form(const std::string name, int gradeSigned, int gradeExec);
		Form(const Form &copy);
		virtual	~Form(void);
		Form &operator=(const Form &op);
        
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

        bool getisSigned() const;

        void setIsSigned(bool isSigned);

        std::string getName() const;


        int getGradeSigned() const;
        int getGradeExec() const;

};
/*std::ostream& operator<<(std::ostream& os, const Form& b)
{
    os <<  "Form " << b.getName() << " is signed " << b.getisSigned() << "and has " << b.getGradeSigned() << "signed grade" << std::endl;
    return (os);
}*/



#endif
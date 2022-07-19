/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:51:01 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 16:53:29 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>
# include <ostream>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &obj);
		~Intern();
		Intern&	operator = (const Intern &intern);

		Form*	makeShrubberyForm(std::string targetForm);
		Form*	makeRobotomyForm(std::string targetForm);
		Form*	makePresidentiaPardonForm(std::string targetForm);
		Form*	makeForm(std::string nameForm, std::string targetForm);

		class FormDoesntExistException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form does not exist");
				}
		};
};

std::ostream&	operator << (std::ostream &o, const Intern &intern);

#endif
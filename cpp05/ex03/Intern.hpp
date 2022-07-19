/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:51:01 by marcos            #+#    #+#             */
/*   Updated: 2022/07/19 18:48:06 by msantos-         ###   ########.fr       */
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

		Form*	ShrubberyForm(std::string targetForm);
		Form*	RobotomyForm(std::string targetForm);
		Form*	PresidentiaPardonForm(std::string targetForm);
		Form*	makeForm(std::string nameForm, std::string targetForm);

		class InexistentFormException: public std::exception
		{
			public:
                virtual const char* what() const throw();
		};
};

#endif
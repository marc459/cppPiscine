/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:44:59 by marcos            #+#    #+#             */
/*   Updated: 2022/03/18 02:08:09 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberryCreation", 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op)
{
	if (&op == this)
		return *this;
	this->_target = op._target;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::fstream file;

	file.open(this->_target + "_shrubbery", std::fstream::out);
	if(file.is_open())
	{
	file << "	     .{{}}}}}}.        " << std:endl;
	file << "		{{{{{{(`)}}}.      " << std:endl; 
	file << "	   {{{(`)}}}}}}}}}     " << std:endl; 
	file << "	  }}}}}}}}}{{(`){{{    " << std:endl;  
	file << "	  }}}}{{{{(`)}}{{{{    " << std:endl; 
	file << "	 {{{(`)}}}}}}}{}}}}}   " << std:endl;  
	file << "	{{{{{{{{(`)}}}}}}}}}}  " << std:endl;  
	file << "	{{{{{{{}{{{{(`)}}}}}}  " << std:endl;
	file << "   {{{{{(`)   {{{{(`)}}}  " << std:endl;  
	file << "	       |   |           " << std:endl;  
	file << "	 (`)  /     \          " << std:endl;   
	file << "	~~~~~~~~~~~~~~~~~~~    " << std:endl;     

		file.close();
	}
}

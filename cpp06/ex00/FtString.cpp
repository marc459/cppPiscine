/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:45:42 by marcos            #+#    #+#             */
/*   Updated: 2022/08/02 22:43:03 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtString.hpp"

Ftstring(const std::string value)
{
    
}
Ftstring(const Ftstring &copy)
{
    
}
virtual	~Ftstring(void)
{
    
}
Ftstring &operator=(const Ftstring &op)
{
    
}
        
void	Ftstring::toChar(double number)
{
	char	numChar;

	numChar = static_cast<char>(number);
	if (number >= 32 && number <= 126)
		std::cout << "Char: '" << numChar << "'" << std::endl;
	else if (number != numChar)
		std::cout << "Char: imposible" << std::endl;
	else	
		std::cout << "Char: Non displayable" << std::endl;
}

void	Ftstring::toInt(double number)
{
	int		numInt;

	numInt = static_cast<int>(number);
	if (number != numInt)
		std::cout << "Int: imposible" << std::endl;
	else
		std::cout << "Int: " << numInt << std::endl;
}

void	Ftstring::toFloat(double number)
{
	float	numFloat;
	
	numFloat = static_cast<float>(number);
	if (roundf(numFloat) != numFloat || number < -999999 || number > 999999)
		std::cout << "Float: " << numFloat << "f" << std::endl;
	else
		std::cout << "Float: " << numFloat << ".0f" << std::endl;
}

void	Ftstring::toDouble(double number)
{
	if (number < -999999 || number > 999999 || number != number)
		std::cout << "Double: " << number << std::endl;
	else
		std::cout << "Double: " << number << ".0" << std::endl;
}

std::string Ftstring::getvalue() const
{
    return this->value;
}

const char *Ftstring::imposibleFtstringException::what() const throw() {
	return "Grade too low";
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os <<  " " << std::endl;
    return (os);
}


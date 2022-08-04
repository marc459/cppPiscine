/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:45:42 by marcos            #+#    #+#             */
/*   Updated: 2022/08/04 20:53:19 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtString.hpp"
#include <stdlib.h>
#include <string>
#include <iomanip>

double ft_stod(std::string str)
{
    size_t i = 0;
    double ret = 0;
    double frac = 0;
    if(str.find_first_of(".") != str.find_last_of("."))
        throw Ftstring::imposibleConversionException();
    if(str.find_first_not_of("0123456789.") != std::string::npos)
        throw Ftstring::imposibleConversionException();
    while(i < str.length() && i < str.find_first_of("."))
    {
        ret = ret * 10 + (str.at(i) - '0');
        i++;
    }
    i = str.length() -1;
    if(str.find_first_of(".") != std::string::npos)
    {
        while(i > str.find_first_of("."))
        {
            frac = frac / 10 + (float)(str.at(i) - '0') / 10;
            i--;
        }
        
    }
    return ret + frac;
}

Ftstring::Ftstring(const std::string word)
{
    if (!strncmp(word.c_str(), "+inff",6))
        this->value = 1.0 / 0.0;
    else if (!strncmp(word.c_str(), "-inff",6))
        this->value = -1.0 / 0.0;
    else if (!strncmp(word.c_str(), "nanf",5))
        this->value = 0.0 / 0.0;
    else if (!strncmp(word.c_str(), "+inf",6))
        this->value = 1.0 / 0.0;
    else if (!strncmp(word.c_str(), "-inf",6))
        this->value = -1.0 / 0.0;
    else if (!strncmp(word.c_str(), "nan",5))
        this->value = 0.0 / 0.0;
    else
        this->value = ft_stod(word);
}
Ftstring::Ftstring(const Ftstring &copy)
{
    this->value = copy.getValue();
}
Ftstring::~Ftstring(void)
{
    
}
Ftstring &Ftstring::operator=(const Ftstring &op)
{
    this->value = op.getValue();
    return(*this);
}
        
void	Ftstring::toChar()
{
	char	numChar;

	numChar = static_cast<char>(this->value);
	if (this->value >= 32 && this->value <= 126)
		std::cout << "Char: '" << numChar << "'" << std::endl;
	else if (this->value != numChar)
		std::cout << "Char: imposible" << std::endl;
	else	
		std::cout << "Char: Non displayable" << std::endl;
}

void	Ftstring::toInt()
{
	int		numInt;

	numInt = static_cast<int>(this->value);
	if (this->value != numInt)
		std::cout << "Int: imposible" << std::endl;
	else
		std::cout << "Int: " << numInt << std::endl;
}

void	Ftstring::toFloat()
{
	float	numFloat;
	
	numFloat = static_cast<float>(this->value);
	std::cout << "Float: " << numFloat << "f" << std::endl;
}

void	Ftstring::toDouble()
{
	std::cout << "Double: " << this->value << std::endl;
}

double Ftstring::getValue() const
{
    return this->value;
}

const char *Ftstring::imposibleConversionException::what() const throw() {
	return "Imposible conversion";
}


std::ostream& operator<<(std::ostream& os, const Ftstring& b)
{
    os <<  "Error:  " << b.getValue() << std::endl;
    return (os);
}


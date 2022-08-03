/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:45:42 by marcos            #+#    #+#             */
/*   Updated: 2022/08/03 16:36:30 by marcos           ###   ########.fr       */
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
    //exception if character
    while(str.at(i) || str.at(i) == '.')
    {
        ret = ret * 10 + (str.at(i) - '0');
        i++;
    }
    i = str.length();
    if(str.at(i) == '.')
    {
        while(str.at(i) != '.')
        {
            frac = frac / 10 + (float)(str.at(i) - '0') / 10;
        }
        i--;
    }
    return ret + frac;
}

Ftstring::Ftstring(const std::string word)
{
    double		nDouble;
    if (word == "+inff")
        nDouble = 1.0 / 0.0;
    else if (word == "-inff")
        nDouble = -1.0 / 0.0;
    else if (word == "nanf")
        nDouble = 0.0 / 0.0;
    else
        nDouble = ft_stod(word);
    this->value = nDouble;
    std::cout << "String to double: " <<  this->value << std::endl;
    
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
	if (roundf(numFloat) != numFloat || this->value < -999999 || this->value > 999999)
		std::cout << "Float: " << numFloat << "f" << std::endl;
	else
		std::cout << "Float: " << numFloat << ".0f" << std::endl;
}

void	Ftstring::toDouble()
{
	if (this->value < -999999 || this->value > 999999 || this->value != this->value)
		std::cout << "Double: " << this->value << std::endl;
	else
		std::cout << "Double: " << this->value << ".0" << std::endl;
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


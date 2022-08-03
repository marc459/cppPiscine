/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:22:23 by marcos            #+#    #+#             */
/*   Updated: 2022/08/03 03:27:52 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FTSTRING_HPP
#define FTSTRING_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>
#include <math.h>


class Ftstring{
    private:
        double value;

    public:
        Ftstring(const std::string value);
		Ftstring(const Ftstring &copy);
		virtual	~Ftstring(void);
		Ftstring &operator=(const Ftstring &op);

        void	toChar();
        void	toInt();
        void	toFloat();
        void	toDouble();

        double    getValue() const;


        class imposibleConversionException : public std::exception 
        {
		    public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Ftstring& b);

#endif
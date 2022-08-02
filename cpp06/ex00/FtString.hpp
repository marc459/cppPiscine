/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtString.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:22:23 by marcos            #+#    #+#             */
/*   Updated: 2022/08/02 22:42:26 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FTSTRING_HPP
#define FTSTRING_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>


class Ftstring{
    private:
        const std::string value;

    public:
        Ftstring(const std::string value);
		Ftstring(const Ftstring &copy);
		virtual	~Ftstring(void);
		Ftstring &operator=(const Ftstring &op);

        void	toChar(double number);
        void	toInt(double number);
        void	toFloat(double number);
        void	toDouble(double number);

        void    getValue() const;


        class imposibleFtstringException : public std::exception 
        {
		    public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Ftstring& b);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:53:05 by marcos            #+#    #+#             */
/*   Updated: 2022/07/20 10:00:52 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>


class Conversion{
    private:
        const std::string name;
        int grade;

    public:
        Conversion(const std::string name, int grade);
		Conversion(const Conversion &copy);
		virtual	~Conversion(void);
		Conversion &operator=(const Conversion &op);

        class imposibleConversionException : public std::exception 
        {
		    public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Conversion& b);

#endif
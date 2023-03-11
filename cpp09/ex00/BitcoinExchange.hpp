/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:47:41 by msantos-          #+#    #+#             */
/*   Updated: 2023/03/11 03:54:15 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class BitcoinExchange;
class Form{
    private:
        std::map<std::string, std::string>	dataSet;
        std::map<std::string, std::string>	dataExchange;

    public:
        BitcoinExchange();
        BitcoinExchange(std::map<std::string, std::string>	dataSet);
		BitcoinExchangeBitcoinExchange(const Form &copy);
		virtual	~BitcoinExchange(void);
		Form &operator=(const Form &op);
        
        int    parse(const std::string file);

        class gradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        class gradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        class formNotSignedException : public std::exception 
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

std::ostream&	operator << (std::ostream &os, Form &form);



#endif
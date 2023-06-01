/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:41:20 by msantos-          #+#    #+#             */
/*   Updated: 2023/06/01 23:41:34 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Rpn.hpp"


Rpn::Rpn(Rpn &cp)
{
    this->polishStack = cp.polishStack;
}
Rpn &Rpn::operator=(Rpn &cp)
{
    this->polishStack = cp.polishStack;
    return (*this);
}

bool ft_sisnumber(const std::string& str) {
    if(str.length() == 0)
        return false;
    for(size_t i = 0; i < str.length(); i++)
    {
        if(!(str[i] > 47 && str[i] < 58))
            return false;
    }
    return true;
}

Rpn::Rpn(std::string expresion)
{
    int op1;
    int op2;
    for (size_t i = 0; i < expresion.size(); i++) {
        char c = expresion[i];
        if(expresion[i+1] > 47 && expresion[i+1] < 58 && c == '-')
        {
            int num = (expresion[i+1] - '0') * (-1);
            this->polishStack.push(num);
            i++;
        }
        else if (c > 47 && c < 58) {
            int num = c - '0';
            if(expresion[i + 1] != ' ' || (i+1) == expresion.size())
            {
                std::cout <<  "Error" << std::endl;
                return;
            }
            this->polishStack.push(num);

        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            
            if(!this->polishStack.empty())
            {
                op1 = this->polishStack.top();
                this->polishStack.pop();
            }
            if(!this->polishStack.empty())
            {
                op2 = this->polishStack.top();
                this->polishStack.pop();

                int res;
                
                switch (c) {
                    case '+': res = op2 + op1; break;
                    case '-': res = op2 - op1; break;
                    case '*': res = op2 * op1; break;
                    case '/': 
                    {
                        if(op1 != 0)
                            res = op2 / op1;
                        else
                        {
                            std::cout <<  "Error" << std::endl;
                            return;
                        }
                            
                        break;
                    }
                }
                
                this->polishStack.push(res);
            }
            else
            {
                std::cout <<  "Error" << std::endl;
                return;
            }
        }
        else if (c != ' ' )
        {
            std::cout <<  "Error" << std::endl;
            return;
        }
    }
    if(polishStack.size() == 1)
        std::cout <<  this->polishStack.top() << std::endl;
    else
        std::cout <<  "Error"  << std::endl;
}

Rpn::~Rpn()
{

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:30:00 by msantos-          #+#    #+#             */
/*   Updated: 2023/04/27 22:14:20 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <string>
#include <stack>

class Rpn{
    private:
        Rpn();
        std::stack<int> polishStack;
        
    public:
        Rpn(std::string expresion);
        Rpn(Rpn &cp);
        Rpn &operator=(Rpn &cp);
        ~Rpn();
        
    
    

    
};

#endif
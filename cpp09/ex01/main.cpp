/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:15:08 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/01 21:15:11 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Rpn *rpn1 = new Rpn(argv[1]);
        delete rpn1;
    }
}
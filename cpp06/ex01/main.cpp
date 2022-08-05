/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/05 14:50:21 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <string.h>
#include <iostream>
#include <math.h>
#include "Data.hpp"



int main(void)
{
   	Data        *data;
    uintptr_t   serialized;
    Data        *deserialized;

    data = new Data;
    data->num = 10;
    serialized = serialize(data);

    std::cout << serialized << std::endl;
    deserialized = deserialize(serialized);
    std::cout << deserialized->num << std::endl;
    delete data;
	return 0;
}
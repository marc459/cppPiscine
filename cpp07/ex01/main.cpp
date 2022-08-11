/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:47:56 by marcos            #+#    #+#             */
/*   Updated: 2022/08/11 17:58:00 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename N>
void	f(N a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int			intarr[5] = {10, 8, 46, 25, 9};
	float		floatarr[4] = {8.0, 22.7, 11.6, 39.1};
	std::string	stringarr[4] = {"this", "is", "an", "array"};


	iter(intarr, sizeof(intarr)/sizeof(intarr[0]), f);
	std::cout << std::endl << std::endl;

	iter(floatarr, sizeof(floatarr)/sizeof(floatarr[0]), f);

	std::cout << std::endl << std::endl;
	iter(stringarr, sizeof(stringarr)/sizeof(stringarr[0]), f);

	return 0;
}
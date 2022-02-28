/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:27:12 by marcos            #+#    #+#             */
/*   Updated: 2022/02/28 15:50:45 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));
	Fixed	const c(Fixed(2.25f) + Fixed(2));
	Fixed	const d(Fixed(5.0f) / Fixed(2));
	Fixed	const e(Fixed(4) - Fixed(3.34f));

	 std::cout << a << std::endl;
	 //std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	 //std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	 std::cout << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (e > d) << std::endl;
	std::cout << (c != a) << std::endl;
	std::cout << (b == d) << std::endl;
	// std::cout << Fixed::min(e, c) << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:01 by marcos            #+#    #+#             */
/*   Updated: 2022/08/12 21:58:27 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <string>
# include <iostream>

template<class I>
void	iter(I *arr, size_t leng, void (*f)(I &a))
{
	size_t	i;

	i = 0;
	while (i < leng)
    {
        f(arr[i]);
        i++;
    }
		
}




#endif
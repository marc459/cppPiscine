/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:26:14 by msantos-          #+#    #+#             */
/*   Updated: 2022/08/03 23:06:07 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <cstdint>
# include <string>
struct Data {
	int			num;
};

uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);

#endif

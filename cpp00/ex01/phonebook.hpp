/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:26:49 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/06 18:03:11 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "contact.hpp"
#include <cstdlib>
#include <string>
#include <cstddef>
#include <ostream>
#include <string>
#include <iomanip>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class  Phonebook {
    public:
    	private:
		Contact contacts[8];
		int		nContacts;

	public:
		Phonebook(void);
		void	add(void);
		void	search(void);
};

#endif
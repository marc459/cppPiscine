/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:26:49 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/12 13:21:00 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include <cstdlib>
#include <string>
#include <cstddef>
#include <ostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cctype>
#include "contact.hpp"
#include <cstdlib>
#include <string>
#include <cstddef>
#include <ostream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cctype>

class  Phonebook {

    private:
		Contact contacts[8];
		int		nContacts;
		int	ft_atoi(const char *str);

	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);

};

#endif
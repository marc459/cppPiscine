/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:23:51 by msantos-          #+#    #+#             */
/*   Updated: 2022/04/06 18:35:41 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	darkest_secret;

	public:
		Contact(void);
		virtual	~Contact(void);

		
		void		setName(std::string name);
		std::string	getName(void);
		void		setLastName(std::string lastname);
		std::string	getLastName(void);
		void		setNickName(std::string nickname);
		std::string	getNickName(void);
		void		setPhone(std::string phone);
		std::string	getPhone(void);
		void		setDarkestsecret(std::string darkest_secret);
		std::string	getDarkestsecret(void);
};
#endif
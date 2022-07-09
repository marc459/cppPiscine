/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:59:16 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 13:23:42 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain{
    private:
        std::string ideas[100];

    public:
        Brain( void );
        ~Brain( void );
        Brain(const Brain &copy);
        Brain &operator =( const Brain &brain );

        
        const std::string *getIdeas() const;
        void setIdeas(const std::string *ideas);
        
    
};
#endif
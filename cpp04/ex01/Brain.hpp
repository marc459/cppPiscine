/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:59:16 by marcos            #+#    #+#             */
/*   Updated: 2022/03/05 19:39:08 by marcos           ###   ########.fr       */
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
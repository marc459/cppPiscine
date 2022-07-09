/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:59:20 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 16:14:31 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain Constructor main called" << std::endl;
    
}
Brain::~Brain( void )
{
    std::cout << "Brain Destructor main called" << std::endl;
}
Brain::Brain(const Brain &copy)
{
    std::cout << "Copy Brain Constructor main called" << std::endl;
    this->setIdeas(copy.getIdeas());
}
Brain &Brain::operator =( const Brain &brain )
{
    std::cout << "Brain Assignation operator called" << std::endl;
    this->setIdeas(brain.getIdeas());
    return (*this);
}
const std::string *Brain::getIdeas() const
{
    return this->ideas;
}

void Brain::setIdeas(const std::string *ideas)
{

    for(int i = 0;i < 100;i++)
    {
        this->ideas[i] = ideas[i];
    }
    
}
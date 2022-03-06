/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:45:40 by marcos            #+#    #+#             */
/*   Updated: 2022/03/06 17:13:25 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
        int nequip;

    public:
        Character( void );
        Character( std::string name );
        Character(const Character &copy);
        virtual ~Character( void );
        Character &operator =( const Character &character );


        std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

        void setName(std::string name);

        
    
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 16:37:55 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "stdlib.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete i;
	delete j;
	
	std::cout << std::endl << std::endl << std::endl;
	Animal *animalarray[10];
	for(int i = 0;i < 5;i++)
		animalarray[i] = new Dog();
	for(int i = 5;i < 10;i++)
		animalarray[i] = new Cat();

	Animal *deepcopy;
	deepcopy = animalarray[2];
	std::cout << "Deep copy " << deepcopy->getType() << std::endl;
	for(int i = 0;i < 10;i++)
		delete animalarray[i];
	
	std::cout << std::endl << std::endl << std::endl << "DEEP COPY BRAIN " << std::endl  << std::endl; 
	
	{
		//DEEP COPY BRAIN
		Dog dog1;
		Dog deepcopydog;

		std::string ideas[100];
		ideas[0] = "NOIDEA";
		
		dog1.getBrain()->setIdeas(ideas);
		deepcopydog=dog1;
		ideas[0] = "IDEA";
		dog1.getBrain()->setIdeas(ideas);
		std::cout << dog1.getBrain()->getIdeas()[0] << std::endl;
		std::cout << deepcopydog.getBrain()->getIdeas()[0] << std::endl;
	}

	
	
	return (0);
}
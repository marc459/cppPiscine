/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:47:13 by marcos            #+#    #+#             */
/*   Updated: 2022/07/09 12:38:50 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "stdlib.h"
void lea()
{
	system("leaks ex01");
}
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
	//atexit(lea);
	
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
		Dog *basic = new Dog();
		std::string ideas[100];
		std::string noidea = "noidea";
		for (int i = 0; i < 100; i++)
			ideas[i] = noidea;
		
		Brain *brainbuff = new Brain();
		brainbuff->setIdeas(ideas); // no idea brain
		
		basic->setBrain(brainbuff);

		Dog *deepcopydog = basic;
		
		std::cout << "DeepCopyBrain:(noidea) " << deepcopydog->getBrain()->getIdeas()[0] << std::endl;
		noidea = "ihaveanidea";
		for (int i = 0; i < 100; i++)
			ideas[i] = noidea;
		brainbuff->setIdeas(ideas);
		basic->setBrain(brainbuff);
		
		std::cout << "DeepCopyBrain changed ideas:(noidea) " << deepcopydog->getBrain()->getIdeas()[0] << std::endl;
		std::cout << "BasicdogBrain changed ideas:(ihaveanidea) " << basic->getBrain()->getIdeas()[0] << std::endl;
		delete basic;
	}
	return (0);
}
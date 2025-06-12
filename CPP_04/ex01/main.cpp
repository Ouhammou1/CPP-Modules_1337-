/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:59:46 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 23:22:34 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{

	int num = 10;
	Animal *animal[num];

	for (int i = 0; i < num /2; i++)
	{
		animal[i] = new Dog();
	}
	
	for (int  i =  num / 2; i < num ; i++)
	{
		animal[i] = new Cat();
	}

	std::cout << std::endl << "Test Sound  " << std::endl << std::endl;

	for (int i = 0; i < num; i++)
	{
		animal[i]->makeSound();
		std::cout  <<  "Type of Animal: " << animal[i]->getType() << std::endl;
	}
	
	std::cout << std::endl << "Setting ideas for Cat " << std::endl;
	for (int  i = 0; i < num; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (i >= num /2)
				animal[i]->setIdea( 4, "HE WANT EAT ");
		}
		
	}

	for (int  i = 0; i < 10; i++)
	{
		std::cout << "Idea " << i << " of Cat: " << animal[6]->getIdea(i) << std::endl;
	}

	std::cout << std::endl << "Setting ideas for Dog " << std::endl << std::endl;
	for (int  i = 0; i < num; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (i < num /2)
				animal[i]->setIdea( 7, "HE WANT EAT ");
		}
		
	}

	for (int  i = 0; i < 10; i++)
	{

		std::cout << "Idea " << i << " of Dog: " << animal[3]->getIdea(i) << std::endl;
	}
	
	for (int i = 0; i < num; i++)
	{
		delete animal[i];
	}
	
	return 0;
}
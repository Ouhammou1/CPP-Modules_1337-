/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:59:46 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/21 20:58:08 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"



int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout  << std::endl;
	std::cout << "Test WrongAnimal with WrongCat: " << std::endl;
	std::cout  << std::endl;

	WrongAnimal *obj1 = new WrongAnimal();
	WrongAnimal *obj2 = new WrongCat();

	obj2->makeSound();
	obj1->makeSound();

	delete meta;
	delete j;
	delete i;
	delete obj1;
	delete obj2	;


	return 0;
}
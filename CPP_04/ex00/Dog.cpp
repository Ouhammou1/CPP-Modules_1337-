/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:39:11 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:35:50 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Animal.hpp"
Dog::Dog()
{
	this->setType("Dog ");
	std::cout <<  "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout <<  "Dog destructor called" << std::endl;
}


Dog::Dog(const Dog &other)
{
	*this = other;
}
Dog& Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}


void 	Dog::makeSound()const 
{	
	std::cout << "Dog make sound ham ham haam..." << std::endl;
}


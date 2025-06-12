/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:39:11 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 23:00:22 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Animal.hpp"
Dog::Dog()
{
	std::cout <<  "Dog constructor called" << std::endl;
	this->setType("Dog ");
	idea = new  Brain();
}

Dog::~Dog()
{
	std::cout <<  "Dog destructor called" << std::endl;
	delete idea;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	idea = new Brain(*other.idea);
}
Dog& Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		if(idea)
			delete  idea;
		idea = new Brain(*other.idea);
	}
	return *this;
}


void 	Dog::makeSound() const
{	
	std::cout << "Dog make sound ham ham haam..." << std::endl;
}


void	Dog::setIdea(int index , std::string nameIdea)
{
	if(index >=0 && index < 100)
	{
		idea->setIdea(index , nameIdea);
	}
}
std::string 	Dog::getIdea(int index )
{
	if(index >=0 && index < 100)
	{
		return idea->getIdea(index);
	}
	return "Invalid index";
}
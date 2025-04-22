/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:33:52 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 23:24:35 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"


Cat::Cat()
{
	std::cout <<  "Cat constructor called" << std::endl;
	this->setType("Cat ");
	idea = new  Brain();
}

Cat::~Cat()
{
	std::cout <<  "Cat destructor called" << std::endl;
	delete idea;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	idea = new Brain(*other.idea);
}
Cat& Cat::operator=(const Cat &other)
{
	 std::cout << "Dog assignment operator called." << std::endl;
	if(this != &other)
	{
		Animal::operator=(other);
		if(idea)
			delete idea;
		idea = new Brain(*other.idea);
	}
	return *this;
}

void 	Cat::makeSound() const
{
	std::cout << "Cat make sound miw miw miw ..." << std::endl;
}


void	Cat::setIdea(int index , std::string nameIdea)
{
	if(index >=0 && index < 100)
	{
		idea->setIdea(index , nameIdea);
	}
}
std::string 	Cat::getIdea(int index )
{
	if(index >=0 && index < 100)
	{
		return idea->getIdea(index);
	}
	return "Invalid index";
}
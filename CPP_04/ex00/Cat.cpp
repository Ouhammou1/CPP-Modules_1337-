/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:33:52 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:35:29 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"


Cat::Cat() 
{
	this->setType("Cat ");
	std::cout <<  "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout <<  "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}
Cat& Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void 	Cat::makeSound() const
{
	std::cout << "Cat make sound miw miw miw ..." << std::endl;
}


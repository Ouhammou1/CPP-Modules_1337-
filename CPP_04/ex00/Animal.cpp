/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:31:51 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:34:31 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("")
{
	std::cout <<  "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout <<  "Animal destructor called" << std::endl;
}
std::string  Animal::getType() const
{
	return type;
}
void 	Animal::setType(std::string name)
{
	this->type = name;
}

Animal::Animal(const Animal & other)
{
	*this = other;
}
Animal& Animal::operator=(const Animal & other)
{
	if(this != & other)
	{
		type = other.type;
	}
	return *this;
}

void 	Animal::makeSound() const
{
	std::cout << "Animal make sound ." << std::endl;
}

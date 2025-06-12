/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:25:28 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 18:47:32 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("")
{
	std::cout <<  "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<  "WrongAnimal destructor called" << std::endl;
}
std::string  WrongAnimal::getType() const
{
	return type;
}
void 	WrongAnimal::setType(std::string  name)
{
	this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
	*this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal & other)
{
	if(this != & other)
	{
		type = other.type;
	}
	return *this;
}

void 	WrongAnimal::makeSound()
{
	std::cout << "Wrong Animal make sound ." << std::endl;
}

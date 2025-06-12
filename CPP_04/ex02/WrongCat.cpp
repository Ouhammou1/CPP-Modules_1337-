/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:19:40 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/21 21:03:42 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
	std::cout <<  "Wrong Cat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	this->setType("Cat ");
	std::cout <<  "Wrong Cat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if(this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return *this;
}

void 	WrongCat::makeSound()
{
	std::cout << "Wrong Cat make sound miw miw miw ..." << std::endl;
}


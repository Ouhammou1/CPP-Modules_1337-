/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:23:50 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 01:42:35 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}



Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (val << this->bits);
}

Fixed::Fixed(const float val) 
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << this->bits));
}


Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

Fixed&	Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &original)
	{
		value = original.value;
	}
	return *this;
}


int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}


float Fixed::toFloat( void ) const
{
	return (float) value / (1 << bits);
}

int  Fixed::toInt( void ) const
{
	return this->value >> bits;
}

std::ostream& operator<<(std::ostream &os , const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
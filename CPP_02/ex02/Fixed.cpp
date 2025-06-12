/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 03:19:00 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 04:49:18 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
}

Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed &original)
{
	*this = original;
}

Fixed&	Fixed::operator=(const Fixed &original)
{
	if(this != &original)
	{
		value = original.value;
	}
	return *this;
}


int Fixed::getRawBits( void ) const
{
	return value;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}


Fixed::Fixed(const int val)
{
	this->value = (val << this->bits);
}

Fixed::Fixed(const float val) 
{
	this->value = roundf(val * (1 << this->bits));
}


float Fixed::toFloat( void ) const
{
	return (float)value / (1 << bits);
}

int  Fixed::toInt( void ) const
{
	return value >> bits;
}

std::ostream& operator<<(std::ostream &os , const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}



bool Fixed::operator>(const Fixed &other ) const
{
	if(this->value > other.value)
		return 1;
	return 0;
}
bool Fixed::operator<(const Fixed &other ) const
{
	if(this->value < other.value)
		return 1;
	return 0;
}
bool Fixed::operator>=(const Fixed &other ) const
{
	if(this->value >= other.value)
		return 1;
	return 0;
}
bool Fixed::operator<=(const Fixed &other ) const
{
	if(this->value <= other.value)
		return 1;
	return 0;
}
bool Fixed::operator==(const Fixed &other ) const
{
	if(this->value == other.value)
		return 1;
	return 0;
}
bool Fixed::operator!=(const Fixed &other ) const
{
	if(this->value != other.value)
		return 1;
	return 0;
}


Fixed Fixed::operator+(const Fixed& other)
{
	Fixed tmp;

	tmp.value = this->value + other.value;
	return tmp;
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed tmp;

	tmp.value = this->value - other.value;
	return tmp;
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed tmp;

	tmp.value = (this->value * other.value) >> bits;
	return tmp;
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed tmp;
	std::cout << (this->getRawBits() << bits) << "\n\n" ;
	if(other.value != 0)
		tmp.setRawBits( (this->getRawBits() << bits) / other.getRawBits())  ;
	
	else
	{
		std::cerr << "Error: Division by zero!" << std::endl;
		tmp.value = 0;
	}
	std::cout << "the fixed =" << tmp.value << std::endl;
	return tmp;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	value++;
	return tmp;
}
Fixed Fixed::operator++()
{
	value++;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	value--;
	return tmp;
}
Fixed Fixed::operator--()
{
	value--;
	return *this;
}

Fixed& Fixed::min(Fixed &a , Fixed &b)
{
	if(a.value < b.value)
		return a;
	else
		return b;
}
const Fixed&  Fixed::min(const Fixed &a ,const  Fixed &b)
{
	if(a.value < b.value)
		return a;
	else
		return b;
}
Fixed& Fixed::max(Fixed &a , Fixed &b)
{
	if(a.value > b.value)
		return a;
	else
		return b;
}
const Fixed& Fixed::max(const Fixed &a ,const Fixed &b)
{
	if(a.value > b.value)
		return a;
	else
		return b;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 03:19:04 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 01:55:27 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXEDPOINT_H
#define FIXEDPOINT_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bits= 8;
public:
	Fixed();
	Fixed(const Fixed &original);
	Fixed&	operator=(const Fixed &original);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed(const int val);
	Fixed(const float val);

	float toFloat( void ) const;
	int toInt( void ) const;



	bool operator>(const Fixed &other ) const;
	bool operator<(const Fixed &other ) const;
	bool operator>=(const Fixed &other ) const;
	bool operator<=(const Fixed &other ) const;
	bool operator==(const Fixed &other ) const;
	bool operator!=(const Fixed &other ) const;

	Fixed operator+(const Fixed& other);
	Fixed operator-(const Fixed& other);
	Fixed operator*(const Fixed& other);
	Fixed operator/(const Fixed& other);

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	
	static Fixed& min(Fixed &a , Fixed &b);
	static const Fixed& min(const Fixed &a ,const  Fixed &b);
	static Fixed& max(Fixed &a , Fixed &b);
	static const Fixed& max(const Fixed &a ,const Fixed &b);








};

std::ostream& operator<<(std::ostream &os , const Fixed &fixed);

#endif

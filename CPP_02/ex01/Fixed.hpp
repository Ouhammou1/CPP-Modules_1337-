/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:23:54 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 01:32:49 by bouhammo         ###   ########.fr       */
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
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed &original);
	~Fixed();
	Fixed&	operator=(const Fixed &original);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &os , const Fixed &fixed);

#endif

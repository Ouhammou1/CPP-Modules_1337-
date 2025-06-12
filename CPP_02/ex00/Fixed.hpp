/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:23:54 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 01:07:22 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_H
#define FIXEDPOINT_H

#include <iostream>

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


	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
};



#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 03:29:42 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/03 07:52:11 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0) ,y(0)
{
}

Point::~Point()
{
}
Point::Point(const float a , const  float b): x(a) , y(b)
{
}


Point::Point(const Point &point) : x(point.x) , y(point.y)
{
}

Point& Point::operator=(const Point &point)
{
	if(this != &point)
	{
	}
	return *this;
}


const Fixed& Point::getX() const
{
	return x;
}
const Fixed& Point::getY() const
{
	return y;
}



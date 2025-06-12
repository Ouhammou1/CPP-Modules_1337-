/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 03:29:45 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 05:32:28 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_H
#define BSP_H
#include "Fixed.hpp"


class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const float a , const  float b);
	Point(const Point &point);
	Point& operator=(const Point &point);
	~Point();


	Fixed const  &getX()const;
	Fixed const  &getY()const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float triangle_area( Point const a, Point const b, Point const c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 03:29:14 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 18:17:07 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>
float triangle_area( Point const a, Point const b, Point const c)
{
	return fabs(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
            b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
            c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float abc =  triangle_area(a,b,c);


	float abp =  triangle_area(a,b,point);
	float bpc =  triangle_area(b,point,c);
	float cpa =  triangle_area(c,point,a);

	std::cout << "abc " <<abc << "\n\n" << std::endl;
	std::cout << "SOMME " << (abp + bpc + cpa) << std::endl;
	
	std::cout << "abp " <<abp << std::endl;
	std::cout << "bpc " <<bpc << std::endl;
	std::cout << "cpa" <<cpa  << "\n\n " << std::endl;



	if (abc == (abp + bpc + cpa))
		return 1;
	else 
		return 0;
}
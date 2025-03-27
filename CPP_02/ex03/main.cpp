/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 03:29:38 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/27 18:27:05 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	// Point a(1.1251,1.361);
	// Point b(7.545,1.245);
	// Point c(1.225,4.453);
	
	// Point point(2.235,2.389);

	Point a(1,1);
	Point b(7,1);
	Point c(1,4);
	
	Point point(0,2);

	if (bsp(a,b,c,point) == 1)
		std::cout << "The point is inside the triangle." << std::endl;
	else
        std::cout << "The point is outside the triangle." << std::endl;
}
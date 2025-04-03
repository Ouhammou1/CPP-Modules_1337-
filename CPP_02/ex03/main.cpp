/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 03:29:38 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/03 07:43:21 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{


	Point a(1,9);
	Point b(1,1);
	Point c(8,4);
	
	Point point(7,7);

	if (bsp(a,b,c,point) == 1)
		std::cout << "The point is inside the triangle." << std::endl;
	else
        std::cout << "The point is outside the triangle." << std::endl;
}
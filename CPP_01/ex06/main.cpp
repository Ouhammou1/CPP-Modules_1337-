/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 05:32:03 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/17 02:04:39 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.h"

int main(int ac , char **av)
{
	if(ac != 2)
	{
		std::cerr  << "Invalid Input!" << std::endl;
		return 0;
	}
	std::string level = av[1];	

	Harl obj;
	obj.complain(level);
}

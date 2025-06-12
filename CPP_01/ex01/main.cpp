/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:25:53 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/11 23:41:09 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  "Zombie.hpp"

int  main()
{
	int N =7;
	std::string name = "Foo ";
	Zombie *hord = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		hord[i].announce();
	}
	delete[] hord;
	return 0;
}
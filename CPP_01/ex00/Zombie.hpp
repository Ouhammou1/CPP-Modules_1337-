/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 04:15:27 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/21 04:15:30 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMNIE_H
#define ZOMNIE_H
#include <iostream>

class Zombie
{
	private:
		std::string  name;
	public:
		Zombie *newZombie(std::string name);
		void announce();
		
		Zombie(std::string name);
		Zombie();
		~Zombie();

};

Zombie *newZombie(std::string name);
void randomChump( std::string name);

#endif

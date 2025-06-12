/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:21:22 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 19:42:38 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout <<  "Brain constructor called" << std::endl;
	for(int i = 0; i < 100 ; i++)
	{
		ideas[i] = "Empty idea";
	}
}

Brain::~Brain()
{
	std::cout <<  "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other )
{
	*this  = other;
}
Brain& Brain::operator=(const Brain& other )
{

	if(this != &other )
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

void	Brain::setIdea(int index , std::string idea)
{
	if(index >=0 && index < 100)
	{
		ideas[index] = idea; 
	}
}
std::string 	Brain::getIdea(int index )
{
	if(index >=0 && index < 100)
	{
		return ideas[index];
	}
	return "";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:21:27 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 19:42:41 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>


class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& other );
	Brain& operator=(const Brain& other );
	~Brain();

	void	setIdea(int index , std::string idea);
	std::string 	getIdea(int index );

	
};





#endif
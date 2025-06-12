/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:30:46 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:33:57 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HH
#define ANIMAL_HH

#include <iostream>


class Animal
{
protected:
	std::string type;
public:

	Animal();
	Animal(std::string name);
	Animal(const Animal & other);
	Animal&operator=(const Animal & other);
	virtual ~Animal();

	std::string getType() const;
	void 		setType(std::string  name);

	virtual void 	makeSound() const;

	virtual void	setIdea(int index , std::string idea);
	virtual std::string 	getIdea(int index );

};



#endif 
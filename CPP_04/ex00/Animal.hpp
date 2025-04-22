/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:30:46 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:34:22 by bouhammo         ###   ########.fr       */
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
	Animal(const Animal & other);
	Animal&operator=(const Animal & other);
	virtual ~Animal();


	std::string getType() const;
	void 		setType(std::string  name);

	virtual void 	makeSound() const;
};



#endif 
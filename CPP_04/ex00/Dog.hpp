/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:39:29 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:35:40 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"



class Dog : public Animal
{
private:

public:
	Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	~Dog();


	void 	makeSound() const;
};




#endif
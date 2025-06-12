/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:11:25 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/08 19:12:55 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGWANIMAL_H
#define WRONGWANIMAL_H

#include <iostream>



class WrongAnimal
{
protected:
	std::string type;
public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal & other);
	WrongAnimal&operator=(const WrongAnimal & other);
	~WrongAnimal();

	std::string getType() const ;
	void 		setType(std::string  name);

	void 	makeSound();
};


#endif
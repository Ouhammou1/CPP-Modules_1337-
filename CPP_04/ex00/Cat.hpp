/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:33:55 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/22 21:35:16 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	~Cat();


	void 	makeSound() const;
};


#endif
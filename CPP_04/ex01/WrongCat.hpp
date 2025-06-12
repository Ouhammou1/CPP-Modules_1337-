/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:20:15 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/21 21:03:16 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat& operator=(const WrongCat &other);
	~WrongCat();


	void 	makeSound();
};


#endif
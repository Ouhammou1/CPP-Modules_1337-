/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:53:55 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 22:31:49 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  FRAGTRAP_HH
#define  FRAGTRAP_HH
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap :virtual public  ClapTrap 
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &original);
	FragTrap& operator=(const FragTrap &original);
	~FragTrap();

	void highFivesGuys(void);
};




#endif
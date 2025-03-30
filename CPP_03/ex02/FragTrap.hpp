/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:53:55 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/30 05:01:42 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  FRAGTRAP_HH
#define  FRAGTRAP_HH
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public  ClapTrap 
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
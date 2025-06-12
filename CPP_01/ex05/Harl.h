/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 00:05:56 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/14 04:56:26 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include  <iostream>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void 	complain(std::string level);
	Harl();
	~Harl();
};





#endif
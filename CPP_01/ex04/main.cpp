/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 04:56:05 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/14 00:22:48 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void 	ReplaceinFile(std::string line, std::fstream  &name ,std::string  s1, std::string  s2 , bool addNewline)
{
	(void)addNewline;
	if (s1.empty() ||  s1 == s2)
		return ;
	
	size_t pos = line.find(s1);
	while(pos != std::string::npos)
	{
		line.erase(pos , s1.length()) ;
		line.insert(pos , s2);
		pos = line.find(s1);
	}
	
	name <<  line ;
	// if(addNewline == 0)
	// 	name << std::endl;
}

int main(int ac , char **av)
{
	if(ac != 4)
	{
		std::cout << "Invalid Input! Usage: ./program <filename> <s1> <s2>"  << std::endl;
		return 0;
	}
	std::string  filename = av[1];
	std::string  s1 = av[2];
	std::string  s2 = av[3];

	std::fstream  	file(filename , std::ios::in );
	if(!file.is_open())
	{
		std::cerr << "Error opening file for reading: "	 << std::endl;
		return 0;
	}

	std::string 	filenameTwo = filename + ".replace";
	std::fstream 	fileTwo(filenameTwo , std::ios::out | std::ios::trunc);

	if(!fileTwo.is_open() )
	{
		std::cerr << "Error opening output file for writing: "	 << std::endl;
		return 0;
	}
	file.seekg(0, std::ios::beg);
	std::string line;
	while (std::getline(file , line))
	{
		bool addNewline = file.eof();
		ReplaceinFile(line, fileTwo , s1, s2 , addNewline);
	}
	file.close();
	fileTwo.close();
	return 0;
}
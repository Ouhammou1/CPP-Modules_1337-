#ifndef ZOMNIE_H
#define ZOMNIE_H
#include <iostream>

class Zombie
{
	private:
		std::string  name;
	public:
		Zombie *newZombie(std::string name);
		void announce();
		
		Zombie(std::string name);
		Zombie();
		~Zombie();

};

Zombie *newZombie(std::string name);
void randomChump( std::string name);

#endif

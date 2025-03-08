#include <iostream>


void 	ConvertTtoTupper(std::string &str)
{
	size_t i ;

	i = 0;
	while (i < str.size())
	{
		// if (str[i] >= 'a' && str[i] <= 'z') { 
        //     str[i] -= 32;
		// 	std::cout << str[i];
        // }
		// else
		// 	std::cout << str[i];
		std::cout << (char)toupper(str[i]);
		i++;
	}
	
	return ;
}
int main(int ac  , char **av)
{

	int i;

	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	i = 1;
	while (i < ac)
	{
		std::string str = av[i];
		ConvertTtoTupper(str);
		if(i < ac - 1)
			std::cout  << " ";
		i++;
	}
	std::cout << std::endl;
	return 0;
}
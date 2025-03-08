#include <iostream>

void 	ConvertTtoTupper(std::string &str)
{
	size_t i ;

	i = 0;
	while (i < str.size())
	{
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
		i++;
	}
	std::cout << std::endl;
	return 0;
}
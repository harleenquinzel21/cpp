#include <iostream>
#include <fstream>
#include <string>

void replace(std::string &fileName, std::string &s1, std::string &s2)
{
	std::ifstream	inputFile(fileName);
	std::ofstream	outputFile(fileName.append(".replace"));
	std::string		line;
	size_t			i = 0;

	if (!inputFile || !outputFile)
	{
		std::cerr << "Error opening file!" << std::endl;
		exit (1);
	}
	while (std::getline(inputFile, line))
	{
		while (1)
		{
			i = line.find(s1);
			if (i == std::string::npos)
			{
				outputFile << line;
				break;
			}
			else
			{
				outputFile << line.substr(0, i) << s2;
				line = line.substr(i + s1.size()); // to the end of the line
			}
		}
		if (!inputFile.eof())
			outputFile  << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return ;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Wrong number of arguments. Usage: ./replace filename s1 s2" << std::endl;
		return 1;
	}
	std::string	fileName = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	replace(fileName, s1, s2);
	return (0);
}

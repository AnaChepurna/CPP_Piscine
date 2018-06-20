#include <fstream>
#include <iostream>

void	replace(char *filename, std::string str1, std::string str2)
{
	std::string 	newfile;
	std::ifstream	src;
	std::ofstream	dst;
	char buf;
	std::string buffer;

	src.open(filename);
	if (src.is_open())
	{
		while(src.read(&buf, 1))
			buffer += buf;
		while ((int)buffer.find(str1) != -1)
			buffer.replace(buffer.find(str1), str1.size(), str2);
		src.close();

		newfile = filename;
		newfile += ".replace";
		dst.open(newfile.data());
		dst << buffer;
	}
	else
		std::cout << "Error: cannot open file \"" << filename << "\"." << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
	else
		replace(argv[1], std::string(argv[2]), std::string(argv[3]));
	return (0);
}
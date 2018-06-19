#include <fstream>
#include <iostream>

std::streampos		getStreamSize(std::ifstream *src)
{
	std::streampos size;

	src->seekg(0, std::ios::end);
	size = src->tellg();
	src->seekg(0, std::ios::beg);
	return (size);
}

void	replace(char *filename, std::string str1, std::string str2)
{
	std::string 	newfile;
	std::ifstream	src;
	std::ofstream	dst;

	newfile = filename;
	newfile += ".replace";
	src.open(filename);
	if (src.is_open())
	{
		dst.open(newfile.data());
		std::streampos	size = getStreamSize(&src);
		std::string	buffer(size, ' ');
		src.read(&buffer[0], size);
		while ((int)buffer.find(str1) != -1)
			buffer.replace(buffer.find(str1), str1.size(), str2);
		dst << buffer;
		src.close();
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
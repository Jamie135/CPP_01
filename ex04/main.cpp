#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

std::string ft_replace(std::string buffer, const std::string search, const std::string replace)
{
	size_t	erase_length = search.length();
	size_t	replace_length = replace.length();
	size_t	pos_search = 0;

	pos_search = buffer.find(search);
	while (pos_search != std::string::npos)
	{
		buffer.erase(pos_search, erase_length);
		buffer.insert(pos_search, replace);
		pos_search = buffer.find(search, pos_search + replace_length);
	}
	return (buffer);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string 	filename = argv[1];
		std::string		search = argv[2];
		std::string		replace = argv[3];
		std::string		buffer;
		std::ifstream	infile;
		std::ofstream	outfile;

		infile.open(argv[1]);
		if (infile.is_open())
		{
			filename += ".replace";
			outfile.open(filename.c_str(), std::ios::out | std::ios::trunc );
			if (outfile.is_open())
			{
				while (std::getline(infile, buffer))
				{
					buffer = ft_replace(buffer, search, replace);
					outfile << buffer;
					if (infile.peek() != EOF)
						outfile << std::endl;
				}
				outfile.close();
			}
			else
			{
				std::perror("Outfile Error");
				infile.close();
				return (1);
			}
			infile.close();
		}
		else
		{
			std::perror("Infile Error");
			return (1);
		}
		return (0);
	}
	else
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
}

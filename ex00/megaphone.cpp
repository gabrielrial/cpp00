#include <iostream>
#include <algorithm>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < argc; i++)
	{
		std::string text = argv[i];
		std::transform(text.begin(), text.end(), text.begin(), ::toupper);
		std::cout << text << " ";
	}
	std::cout << std::endl;
	return 0;
}

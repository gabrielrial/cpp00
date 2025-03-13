#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	Phonebook	pb;
	

	while (1)
	{
		std::cout << "|    ADD    |   SEARCH    |    EXIT    |" << std::endl << std::endl;
		std::getline(std::cin, input);

		if (input == "ADD")
			add_contact();
		else if (input == "SEARCH")
			
		else if (input == "EXIT")
			break ;
	}
	return 0;
}

void	add_contact(void)
{
	string	input;

	std::cout << "ADD: ";
	std::getline(std::cin, input);
	if (input)
	
	std::cout << "ADD:" << std::endl << std::endl;
}
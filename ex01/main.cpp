
#include "lib.hpp"

using namespace std;

int main(void)
{
	Phonebook	pb;
	string		input;

	while (1)
	{
		cout <<      "==================== MAIN MENU ====================" << endl;
		std::cout << "=         ADD    |   SEARCH    |    EXIT          =" << std::endl;
		cout <<      "===================================================" << endl;
		std::getline(std::cin, input);

		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.searchContact();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}

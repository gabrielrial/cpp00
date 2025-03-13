#include "Phonebook.hpp"

using namespace std;

void Phonebook::searchContact(void)
{

	string input;

	std::getline(std::cin, input);
	if (input >= '1' || input <= '8')
		displayContact;
	return;
}
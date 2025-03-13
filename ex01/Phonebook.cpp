#include "Phonebook.hpp"

using namespace std;

void Phonebook::searchContact(void)
{

	string input;

	this->displayContact(input);
	std::getline(std::cin, input);
	if (input >= '1' || input <= '8')
		else
		{
			for (int i = 1; i <= 8; i++;)
				this->displayContact(i)
		}
	return;
}

void Phonebook::displayContact(int index)
{
	printRow("Index", "F.Name", "L.Name", "Nickname") for (int i = 0; i < this.currentContact; i++;)
		printRow(this.Contact[i]._index, this.Contact[i]._firstName, this.Contact[i]._lastName, this.Contact[i]._nickname)
}

void Phonebook::printRow(int col1, strig col2, string col3, string col4)
{
	printColumn(col1);
	std::cout << "|";
	printColumn(col2);
	std::cout << "|";
	printColumn(col3);
	std::cout << "|";
	printColumn(col4);
	std::cout << std::endl;
}

void printColumn(const std::string &text)
{
	if (text.length() > 10)
		std::cout << std::setw(10) << std::right << text.substr(0, 9) + "."; // truncamos y añadimos '.'
	else
		std::cout << std::setw(10) << std::right << text;
}
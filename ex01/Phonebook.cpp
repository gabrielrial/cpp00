#include "Phonebook.hpp"

using namespace std;

void Phonebook::searchContact(void)
{

	string input;

	this->displayList(input);
	std::getline(std::cin, input);
	if (input >= '1' && input <= '8')
		displayContact(input);
	else
		cout << "Index must be from 1 to 8." << endl
	return;
}

void Phonebook::displayList(void)
{
	printRow("Index", "F.Name", "L.Name", "Nickname"); 
    for (int i = 0; i < _currentContact; i++)
        printRow(to_string(i + 1), _store[i]._firstName, _store[i]._lastName, _store[i]._nickname);
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
		std::cout << std::setw(10) << std::right << text.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << text;
}

void Phonbook::displayContact(contact Contact)
{
	std::cout << "First Name:	";
	std::cout << Contact._firstName << endl;
	std::cout << "Last Name:	";
	std::cout << Contact._lastName  << endl;
	std::cout << "Nickname:		" ;
	std::cout << Contact._nickname << endl;
	std::cout << "Phone Number:	" ;
	std::cout << Contact._phoneNumber << endl;
	std::cout << "Darkest Secret:	" << endl;
	std::cout << Contact._darkestSecret << endl;

}
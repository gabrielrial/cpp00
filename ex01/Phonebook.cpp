#include "lib.hpp"

using namespace std;

int Phonebook::_currentContact = 0;

Phonebook::Phonebook()
{
	_currentContact = -1;
}

Phonebook::~Phonebook()
{
	return ;
}

void Phonebook::searchContact(void)
{
	string input;
	int index;

	if (_currentContact == -1)
	{
		system("clear");
		cout << "Contact list is empty." << endl;
		cout << "Press Enter to continue..." << endl;
		cin.get();
		system("clear");
		return;
	}
	this->displayList();
	cout << "Which contact would you like to display?." << endl;
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
	{
		index = atoi(input.c_str()) - 1;
		if (index < _currentContact)
			displayContact(_store[index]);
		else
			cout << "No contact found at this index." << endl;
	}
	else
		cout << "Index must be from 1 to 8." << endl;
}

void Phonebook::displayList(void)
{
	printRow("Index", "F.Name", "L.Name", "Nickname");
	for (int i = 0; i < 8; i++)
	{
		if (!this->_store[i].getFirstName().empty())
			printRow(_store[i].getIndex(), _store[i].getFirstName(), _store[i].getLastName(), _store[i].getNickName());
	}
	return;
}

void Phonebook::printRow(string col1, string col2, string col3, string col4)
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

void Phonebook::printColumn(const std::string &text)
{
	if (text.length() > 10)
		std::cout << std::setw(10) << std::right << text.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << text;
}

void Phonebook::displayContact(Contact contact)
{
	std::cout << "First Name:	";
	std::cout << contact.getFirstName() << endl;
	std::cout << "Last Name:	";
	std::cout << contact.getLastName() << endl;
	std::cout << "Nickname:		";
	std::cout << contact.getNickName() << endl;
	std::cout << "Phone Number:	";
	std::cout << contact.getPhoneNumber() << endl;
	std::cout << "Darkest Secret:	" << endl;
	std::cout << contact.getDarkestSecret() << endl;
}

void Phonebook::addContact(void)
{
	string input;

	if (_currentContact >= 8 || _currentContact == -1)
	{
		if (_currentContact == 8)
			cout << "Phonebook is full. Replacing the first contact." << endl;
		_currentContact = 0;
	}

	_store[_currentContact].setIndex(_currentContact);

	cout << "Enter First Name: ";
	getline(cin, input);
	_store[_currentContact].setFirstName(input);

	cout << "Enter Last Name: ";
	getline(cin, input);
	_store[_currentContact].setLastName(input);

	cout << "Enter Nickname: ";
	getline(cin, input);
	_store[_currentContact].setNickName(input);

	cout << "Enter Phone Number: ";
	getline(cin, input);
	_store[_currentContact].setPhoneNumber(input);

	cout << "Enter Darkest Secret: ";
	getline(cin, input);
	_store[_currentContact].setDarkestSecret(input);

	_currentContact++;
}


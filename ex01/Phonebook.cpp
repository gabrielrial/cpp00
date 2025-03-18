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
	cout << "\n==================== CONTACT LIST ====================" << endl;
	_printRow("Index", "F.Name", "L.Name", "Nickname");
	for (int i = 0; i < 8; i++)
	{
		if (!this->_store[i].getFirstName().empty())
			_printRow(_store[i].getIndex(), _store[i].getFirstName(), _store[i].getLastName(), _store[i].getNickName());
	}
	cout << "======================================================" << endl;
	return;
}

void Phonebook::_printRow(string col1, string col2, string col3, string col4)
{
	_printColumn(col1);
	std::cout << "|";
	_printColumn(col2);
	std::cout << "|";
	_printColumn(col3);
	std::cout << "|";
	_printColumn(col4);
	std::cout << std::endl;
}

void Phonebook::_printColumn(const std::string &text)
{
	if (text.length() > 10)
		std::cout << std::setw(10) << std::right << text.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << text;
}

void Phonebook::displayContact(Contact contact)
{
    cout << "\n==================== CONTACT DETAILS ====================" << endl;
    cout << "First Name:      " << contact.getFirstName() << endl;
    cout << "Last Name:       " << contact.getLastName() << endl;
    cout << "Nickname:        " << contact.getNickName() << endl;
    cout << "Phone Number:    " << contact.getPhoneNumber() << endl;
    cout << "Darkest Secret:  " << contact.getDarkestSecret() << endl;
    cout << "===========================================================" << endl;
}

void Phonebook::addContact(void)
{
	if (_currentContact >= 8 || _currentContact == -1)
	{
		if (_currentContact >= 8)
			cout << "Phonebook is full. Replacing the first contact." << endl;
		_currentContact = 0;
	}

	_store[_currentContact].setIndex(_currentContact + 1);
	_store[_currentContact].setFirstName(_getInput("Enter First Name: "));
	_store[_currentContact].setLastName(_getInput("Enter Last Name: "));
	_store[_currentContact].setNickName(_getInput("Enter Nickname: "));
	_store[_currentContact].setPhoneNumber(_getInput("Enter Phone Number: "));
	_store[_currentContact].setDarkestSecret(_getInput("Enter Darkest Secret: "));

	_currentContact++;
}

string 	Phonebook::_getInput(const string promt)
{
	string	input;

	while (input.empty())
	{
		cout << promt;
		getline(cin, input);
	}
	return (input);
}


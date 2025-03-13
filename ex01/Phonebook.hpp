#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

using namespace std;


class	PhoneBook
{
	
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void		addContact(void);
		void		searchContact(void);

	private:
		int			_currentContact = 0;
		Contact		_store[8];
		int const	_maxContacts = 7;

};

class	Contact{

	public:

		Contact(void);
		~Contact(void);
	private:
	
		string	_firstName;
		string	_lastName;
		string	_nickname;
		string	_phoneNumber;
		string	_darkestSecret;

};

#endif
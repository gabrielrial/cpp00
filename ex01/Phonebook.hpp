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

		void	addContact(void);
		void	searchContact(void);
		void	displayContact(int index);

	private:
		static int	_currentContact = 0;
		Contact		_store[8];

};

class	Contact{

	public:

		Contact(void);
		~Contact(void);
	private:

		int		_index;
		string	_firstName;
		string	_lastName;
		string	_nickname;
		string	_phoneNumber;
		string	_darkestSecret;

};

#endif
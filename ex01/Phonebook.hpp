#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "lib.hpp"

class Phonebook 
{
	public:
		Phonebook(void);
		~Phonebook(void);

		void addContact(void);
		void searchContact(void);
		void displayContact(Contact contact);
		void displayList(void);

	private:
		static int _currentContact;
		Contact _store[8];

		void printRow(string col1, string col2, string col3, string col4);
		void printColumn(const string &text);
};

#endif

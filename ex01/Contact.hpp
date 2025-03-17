#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "lib.hpp"

using namespace std;

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		string getIndex(void);
		string getFirstName(void);
		string getLastName(void);
		string getNickName(void);
		string getPhoneNumber(void);
		string getDarkestSecret(void);

		void setIndex(int index);
		void setFirstName(const string &firstName);
		void setLastName(const string &lastName);
		void setNickName(const string &nickname);
		void setPhoneNumber(const string &phoneNumber);
		void setDarkestSecret(const string &darkestSecret);

	private:
		string	_index;
		string	_firstName;
		string	_lastName;
		string	_nickname;
		string	_phoneNumber;
		string	_darkestSecret;
};

#endif
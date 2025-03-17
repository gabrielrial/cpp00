#include "lib.hpp"

using namespace std;

Contact::Contact()
{
	_index = "";
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::~Contact()
{
	return;
}


std::string Contact::getFirstName(void)
{
    return _firstName;
}

std::string Contact::getLastName(void)
{
    return _lastName;
}

std::string Contact::getNickName(void)
{
    return _nickname;
}

std::string Contact::getPhoneNumber(void)
{
    return _phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
    return _darkestSecret;
}

std::string Contact::getIndex()
{
    return _index;
}

void Contact::setIndex(int index)
{
    std::stringstream ss;

    ss << index;
    std::string str = ss.str();
	_index = str;
}

void Contact::setFirstName(const string &firstName) 
{
    _firstName = firstName;
}

void Contact::setLastName(const string &lastName) 
{
    _lastName = lastName;
}

void Contact::setNickName(const string &nickname) 
{
    _nickname = nickname;
}

void Contact::setPhoneNumber(const string &phoneNumber) 
{
    _phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const string &darkestSecret) 
{
    _darkestSecret = darkestSecret;
}


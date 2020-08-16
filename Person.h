#ifndef __PERSON_H
#define __PERSON_H

#include "Address.h"

const int ID_LENGTH = 9;
const int PHONE_NUMBER_LENGTH = 10;

class Person 
{
private:
	char id[ID_LENGTH];
	char* fullName;
	int age;
	char phoneNumber[PHONE_NUMBER_LENGTH];
	Address address;

public:
	const char* getId() const;		
	const char* getFullName() const;
	const int getAge() const;
	const char* getPhoneNumber() const;

	bool setFullName(char* fullName);
	bool setAge(int age);
	bool setPhoneNumber(char* phoneNumber);

	const void printDetails() const;

private:
	bool setId(char* id);

};

#endif

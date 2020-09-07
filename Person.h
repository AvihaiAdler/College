#ifndef __PERSON_H
#define __PERSON_H

#include "Address.h"

const int ID_LENGTH = 9;
const int PHONE_NUMBER_SIZE = 10;

class Person 
{
private:
	char id[ID_LENGTH];
	char* fullName;
	int age;
	char phoneNumber[PHONE_NUMBER_SIZE];
	Address address;

public:
	Person(const char* id, const char* fullName, int age, const char* phoneNumber, const Address& address);
	Person(const Person& person) = delete;
	Person(Person&& porson);
	~Person();

	const char* getId() const;		
	const char* getFullName() const;
	const int getAge() const;
	const char* getPhoneNumber() const;
	const Address& getAddress() const;

	bool setFullName(const char* fullName);
	bool setAge(int age);
	bool setPhoneNumber(const char* phoneNumber);
	bool setAddress(const Address& address);

	const Person& operator=(const Person& other);
	bool operator==(const Person& other);
	bool operator!=(const Person& other);
	friend std::ostream& operator<<(std::ostream& o, const Person& person);

private:
	bool setId(const char* id);

};

#endif

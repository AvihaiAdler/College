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

	bool setId(const char* id);
public:
	Person(const char* id, const char* fullName, int age, const char* phoneNumber, const Address& address);
	Person(const Person& person) = delete;
	Person(Person&& porson);
	virtual ~Person();

	const char* getId() const;		
	const char* getFullName() const;
	int getAge() const;
	const char* getPhoneNumber() const;
	const Address& getAddress() const;

	bool setFullName(const char* fullName);
	bool setAge(int age);
	bool setPhoneNumber(const char* phoneNumber);
	bool setAddress(const Address& address);

	bool operator==(const Person& other);
	bool operator!=(const Person& other);
	friend std::ostream& operator<<(std::ostream& o, const Person& person);
};

#endif

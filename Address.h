#ifndef __ADDRESS_H
#define __ADDRESS_H
#include <iostream>

class Address
{
private:
	char* city;
	char* street;
	int houseNumber;

public:
	Address(char* city, char* street, char* houseNumber);
	Address(const Address& other);	
	Address(Address&& address);		
	~Address();

	const char* getCity() const;
	const char* getStreet() const;
	int getHouseNumber() const;

	bool setCity(const char* city);
	bool setStreet(const char* street);
	bool setHouseNumber(int HouseNumber);

	const Address& operator=(const Address& other);
	friend std::ostream& operator<<(std::ostream& o, const Address& address);
};

#endif // !__ADDRESS_H


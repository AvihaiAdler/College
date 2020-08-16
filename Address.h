#ifndef __ADDRESS_H
#define __ADDRESS_H

class Address
{
private:
	char* city;
	char* street;
	int houseNumber;

public:
	Address(char* city, char* street, char* houseNumber);
	const char* getCity() const;
	const char* getStreet() const;
	const int getHouseNumber() const;

	bool setCity(char* city);
	bool setStreet(char* street);
	bool setHouseNumber(int HouseNumber);

	const void printDetails() const;
};

#endif // !__ADDRESS_H


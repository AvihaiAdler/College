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
	Address(const Address& other);		//copy c'tor
	Address(Address&& address);		//move c'tor
	~Address();

	const char* getCity() const;
	const char* getStreet() const;
	const int getHouseNumber() const;

	bool setCity(const char* city);
	bool setStreet(const char* street);
	bool setHouseNumber(int HouseNumber);

	void printDetails() const;
};

#endif // !__ADDRESS_H


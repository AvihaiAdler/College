#ifndef __LAB_H
#define __LAB_H

#include "Room.h"

class Lab : public Room
{
private:
	char* name;
	int num_of_workstations;

public:
	Lab(const char* name, int num_of_workStation);
	Lab(Lab& other);
	Lab(Lab&& lab);
	~Lab();

	const char* getName() const;
	const int getNumOfWorkstations() const;

	bool setName(char* name);
	bool setNumOfWorkstations(int numOfWorkStations);

	void printDetails() const;

};
#endif 


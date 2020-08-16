#ifndef __LAB_H
#define __LAB_H

#include "Room.h"

class Lab : public Room
{
private:
	char* name;
	int num_of_workstations;

public:
	char* getName();
	int getNumOfWorkstations();

	bool setName(char* name);
	bool setNumOfWorkstations(int numOfWorkStations);

	void printDetails();

};
#endif 


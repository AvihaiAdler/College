#ifndef __LAB_H
#define __LAB_H

#include "Room.h"

class Lab : public Room
{
private:
	char* name;
	int num_of_workstations;

public:
	Lab(const Room& room, char* name, int num_of_workStation);
	Lab(Lab& other);
	Lab(Lab&& lab);
	~Lab();

	const char* getName() const;
	int getNumOfWorkstations() const;

	bool setName(char* name);
	bool setNumOfWorkstations(int numOfWorkStations);

	const Lab& operator=(const Lab& other);
	friend std::ostream& operator<<(std::ostream& o, const Lab& lab);

};
#endif 


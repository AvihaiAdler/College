#ifndef __LECTORER_H
#define __LECTORER_H

#include "EducationStaff.h"

class Lecturer : public EducationStaff
{
public:
	Lecturer();
	Lecturer(const Lecturer& other) = delete;
	Lecturer(Lecturer&& lecturer);
	~Lecturer();

	void printDetails() const;
};

#endif

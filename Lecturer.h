#ifndef __LECTURER_H
#define __LECTURER_H

#include "EducationStaff.h"

class Lecturer : public EducationStaff
{
public:
	Lecturer();
	Lecturer(const Lecturer& other) = delete;
	Lecturer(Lecturer&& lecturer);
	~Lecturer();

	friend std::ostream& operator<<(std::ostream& o, const Lecturer& lecturer);
};

#endif

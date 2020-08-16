#ifndef __PRACTITIONER_H
#define __PRACTITIONER_H

#include "EducationStaff.h"

class Practitioner : public EducationStaff
{
private:
	Lecturer* resposibleLectorer;

public:
	Lecturer* getResponsibleLectorer();
	
	bool setResponsibleLectorer(Lecturer* lecturer);

	void printDetails();
};

#endif // !__PRACTITIONER_H


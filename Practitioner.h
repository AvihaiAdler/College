#ifndef __PRACTITIONER_H
#define __PRACTITIONER_H

#include "EducationStaff.h"

class Practitioner : public EducationStaff
{
private:
	Lecturer* resposibleLectorer;

public:
	Practitioner(const Lecturer* resposibleLectorer);
	Practitioner(const Practitioner& other) = delete;
	Practitioner(Practitioner&& practitioner);
	~Practitioner();

	Lecturer* getResponsibleLectorer();
	
	bool setResponsibleLectorer(Lecturer* lecturer);

	void printDetails() const;
};

#endif // !__PRACTITIONER_H


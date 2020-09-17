#ifndef __PRACTITIONER_H
#define __PRACTITIONER_H

#include "EducationStaff.h"

class Practitioner : public EducationStaff
{
private:
	Lecturer* resposibleLectorer;	//A pointer to a lecturer to whom the practitoner report/help

public:
	Practitioner(const EducationStaff& ed, const Lecturer* resposibleLectorer);
	Practitioner(const Practitioner& other) = delete;
	Practitioner(Practitioner&& practitioner);
	~Practitioner();

	Lecturer* const getResponsibleLectorer();
	
	bool setResponsibleLectorer(const Lecturer* lecturer);

	friend std::ostream& operator<<(std::ostream& o, const Practitioner& p);
};

#endif // !__PRACTITIONER_H


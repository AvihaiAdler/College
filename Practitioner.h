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

	Lecturer* const getResponsibleLectorer();
	
	bool setResponsibleLectorer(Lecturer* lecturer);

	const Practitioner& operator=(const Practitioner& other);
	friend std::ostream& operator<<(std::ostream& o, const Practitioner& p);
};

#endif // !__PRACTITIONER_H


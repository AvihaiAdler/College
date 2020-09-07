#ifndef __EMPLOYED_STUDENT_H
#define __EMPLOYED_STUDENT_H

#include "Student.h"
#include "Worker.h"

class EmployedStudent : public Student, public Worker
{
private:
	int pointsDischarge;

public:
	EmployedStudent(int points);
	EmployedStudent(const EmployedStudent& other) = delete;
	EmployedStudent(EmployedStudent&& employedStudent);
	~EmployedStudent();

	friend std::ostream& operator<<(std::ostream& o, const EmployedStudent& eStudent);
};

#endif // !__EMPLOYED_STUDENT_H


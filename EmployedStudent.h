#ifndef __EMPLOYED_STUDENT_H
#define __EMPLOYED_STUDENT_H

#include "Student.h"
#include "Worker.h"

class EmployedStudent : public Student, public Worker
{
public:
	EmployedStudent();
	EmployedStudent(const EmployedStudent& other) = delete;
	EmployedStudent(EmployedStudent&& employedStudent);
	~EmployedStudent();

	void printDetails() const;
};

#endif // !__EMPLOYED_STUDENT_H


#ifndef __EMPLOYED_STUDENT_H
#define __EMPLOYED_STUDENT_H

#include "Student.h"
#include "Worker.h"

class EmployedStudent : public Student, public Worker
{
private:
	int pointsDischarge;	//points the employed gets for his employement if any (e.g. student who's also a tester for exesices gets a point or to off)

public:
	EmployedStudent(const Student& student, const Worker& worker, int points);
	EmployedStudent(const EmployedStudent& other) = delete;
	EmployedStudent(EmployedStudent&& employedStudent);
	~EmployedStudent();

	int getPoint() const;
	void setPoints(const int points);

	friend std::ostream& operator<<(std::ostream& o, const EmployedStudent& eStudent);
};

#endif // !__EMPLOYED_STUDENT_H


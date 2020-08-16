#ifndef __STUDENT_H
#define __STUDENT_H

#include "Person.h"

class Course course;

class Student : public Person
{
private:
	Department* department;
	Course** pastCourses, **presentCourses, **futureCourses;
	double average;

public:
	Department* getDepartment();
	Course** getPassedCourses();
	Course** getPresentCourses();
	Course** getFutureCourses();
	double getAverage();

	bool setDepartment(Department* department);
	bool setPastCourses(Course** pastCourses);
	bool setPresentCourses(Course** presentCourses);
	bool setFutureCourses(Course** futureCourses);

	bool addCourse(Course** coursesList, Course* course);    
	bool deleteCourse(Course** coursesList, int id);

	void printDetails();

private:
	double calculateAverage();

};

#endif // !__STUDENT_H

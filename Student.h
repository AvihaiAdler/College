#ifndef __STUDENT_H
#define __STUDENT_H

#include "Person.h"

class Course course;

class Student : public Person
{
private:
	/*Physical size:*/
	int pastCoursesCapacity;
	int presentCoursesCapacity;
	int futureCoursesCapacity;

	/*Logical size:*/
	int pastCoursesSize;
	int presentCoursesSize;
	int futureCoursesSize;

	Department* department;
	Course** pastCourses, **presentCourses, **futureCourses;
	double average;

public:
	const int getPastCoursesSize() const;
	const int getPresentcoursesSize() const;
	const int getFutureCoursesSize();

	Department* getDepartment();
	Course** getPassedCourses();
	Course** getPresentCourses();
	Course** getFutureCourses();
	const double getAverage() const;

	bool setDepartment(Department* department);
	bool setPastCourses(Course** pastCourses);
	bool setPresentCourses(Course** presentCourses);
	bool setFutureCourses(Course** futureCourses);

	bool addCourse(Course** coursesList, Course* course);    
	bool deleteCourse(Course** coursesList, int id);

	const void printDetails() const;

private:
	double calculateAverage();

};

#endif // !__STUDENT_H

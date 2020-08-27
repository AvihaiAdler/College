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
	Student(const Department* department, int pastCoursesSize = 0, int presentCoursesSize = 0, int futureCoursesSize = 0); //init all physical sizes (transparent to the user)
	Student(const Student& other) = delete;
	Student(Student&& student);
	~Student();

	const int getPastCoursesSize() const;
	const int getPresentcoursesSize() const;
	const int getFutureCoursesSize() const;

	Department* const getDepartment();
	Course*const* const getPassedCourses();
	Course*const* const getPresentCourses();
	Course*const* const getFutureCourses();
	const double getAverage() const;

	bool setDepartment(Department* department);
	bool setPastCourses(Course** pastCourses);
	bool setPresentCourses(Course** presentCourses);
	bool setFutureCourses(Course** futureCourses);

	bool addCourse(Course** coursesList, Course* course);    
	bool deleteCourse(Course** coursesList, int id);

	void printDetails() const;

private:
	double calculateAverage();

};

#endif // !__STUDENT_H

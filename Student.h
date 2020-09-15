#ifndef __STUDENT_H
#define __STUDENT_H

#include "Person.h"

class Course;
class Department;

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

	Department* department;										//a pointer to the department the student attend
	Course** pastCourses, **presentCourses, **futureCourses;	//array of courses
	double average;

public:
	Student(const Person& person, Department* department, int pastCoursesSize = 0, int presentCoursesSize = 0, int futureCoursesSize = 0); //init all physical sizes (transparent to the user)
	Student(const Student& other) = delete;
	Student(Student&& student);
	~Student();

	int getPastCoursesSize() const;
	int getPresentcoursesSize() const;
	int getFutureCoursesSize() const;

	Department* const getDepartment();
	Course*const* const getPassedCourses();
	Course*const* const getPresentCourses();
	Course*const* const getFutureCourses();
	double getAverage() const;

	bool setDepartment(Department* department);
	bool setPastCourses(Course** pastCourses);
	bool setPresentCourses(Course** presentCourses);
	bool setFutureCourses(Course** futureCourses);

/*	bool addCourse(Course** coursesList, Course* course);    
	bool deleteCourse(Course** coursesList, int id);	*/	

	virtual const Student& operator=(const Student& other);
	bool operator==(const Student& other);
	bool operator!=(const Student& other);
	friend std::ostream& operator<<(std::ostream& o, const Student& student);

private:
	double calculateAverage();

};

#endif // !__STUDENT_H

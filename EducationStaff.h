#ifndef __COURSESTAFF_H
#define __COURSESTAFF_H

#include "Worker.h"

class Department;
class Course;

class EducationStaff : public Worker
{
private:
	//Physical value:
	int coursesCapacity;

	//Logical value:
	int coursesSize;

	char** degreeTitles;
	Department* department;		//Assuming every EducationStaff teach only in 1 Department
	Course** courses;

public:
	const int getCoursesSize() const;
	const char** getDegreeTitles() const;
	Department* getDepartment();
	Course** getCoursesList();

	bool setDegreeTitles(char** degreeTitles);
	bool setDepartment(Department department);
	bool setCoursesList(Course** courses);

	Course* getCourse(int id);
	Course* getCourse(char* name);

	bool addDegreeTitle(char* degreeTitle);
	bool addCourse(Course* course);
	bool deleteCourse(int id);

	const void printDetails() const;
	~EducationStaff();

private:
	bool resizeCourses();
};

#endif // !__COURSESAFF_H

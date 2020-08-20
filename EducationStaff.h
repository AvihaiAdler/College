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
	EducationStaff(const char** titles, const Department* department, int coursesSize = 0); //init courseCapacity to an initial value (transparent to the user)
	EducationStaff(const EducationStaff& other) = delete;
	EducationStaff(EducationStaff&& staff);
	~EducationStaff();

	const int getCoursesSize() const;
	const char** getDegreeTitles() const;
	Department* getDepartment();
	Course** getCoursesList();

	bool setDegreeTitles(const char** degreeTitles);
	bool setDepartment(Department department);
	bool setCoursesList(Course** courses);

	Course* getCourse(int id);
	Course* getCourse(const char* name);

	bool addDegreeTitle(const char* degreeTitle);
	bool addCourse(Course* course);
	bool deleteCourse(int id);

	void printDetails() const;

private:
	bool resizeCourses();
};

#endif // !__COURSESAFF_H

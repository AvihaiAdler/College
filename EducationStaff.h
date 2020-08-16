#ifndef __COURSESTAFF_H
#define __COURSESTAFF_H

#include "Worker.h"

class Department;
class Course;

class EducationStaff : public Worker
{
private:
	char** degreeTitles;
	Department* department;
	Course** courses;

public:
	EducationStaff(char** degreeTitles, Department* department, Course** courses);
	char** getDegreeTitles();
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

	void printDetails();
	~EducationStaff();
};

#endif // !__COURSESAFF_H

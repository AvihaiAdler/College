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

	char** degreeTitles;		//array of degrees (if any)
	Department* department;		//Assuming every EducationStaff teach only in 1 Department - a apointer
	Course** courses;			//array of courses the stuff member teaching 

public:
	EducationStaff(const Worker& worker, const char* title, const Department* department, int coursesSize = 0); //init courseCapacity to an initial value (transparent to the user)
	EducationStaff(const EducationStaff& other) = delete;
	EducationStaff(EducationStaff&& staff);
	virtual ~EducationStaff();

	int getCoursesSize() const;
	const char* getDegreeTitles() const;
	Department* const getDepartment();
	Course*const* const getCoursesList();

	bool setDegreeTitles(const char* degreeTitles);
	bool setDepartment(Department department);
	bool setCoursesList(Course** courses);

	Course* const getCourse(int id);
	Course* const getCourse(const char* name);

	bool addDegreeTitle(const char* degreeTitle);
	bool addCourse(Course* course);
	bool deleteCourse(int id);

	virtual const EducationStaff& operator=(const EducationStaff& other);
	friend std::ostream& operator<<(std::ostream& o, const EducationStaff& staff);

private:
	bool resizeCourses();
};

#endif // !__COURSESAFF_H

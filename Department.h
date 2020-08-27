#ifndef __DEPARTMENT_H
#define __DEPARTMENT_H

#include "Course.h"

class Department
{
private:
	enum class eDepartmentName {electrical_engineering, mechanical_engineering, software_engineering, medical_engineering};
	eDepartmentName name;

	/*Physical values:*/
	int coursesCapacity;
	int lecturersCapacity;
	int practitionersCapacity;
	int studentsCapapcity;

	/*Logical values:*/
	int coursesSize;
	int lecturersSize;
	int pracitionersSize;
	int studentsSize;

	int id;
	Course* courses;			//Course cannot live outside Department (array of class Courses)
	Lecturer* headOfDepartment;
	Lecturer** lecturers;
	Practitioner** practitioners;
	Student** students;	

public:
	Department(eDepartmentName name, int id, int coursesSize = 0, int lecturersSize = 0, int pracitionersSize = 0, int studentsSize = 0); //init Capacity - trasparent
	Department(const Department& other);
	Department(Department&& department);
	~Department();

	const int getCoursesSize() const;
	const int getLecturersSize() const;
	const int getPractitionersSize() const;
	const int getStudentsSize() const;

	const eDepartmentName getDepartmentName() const;
	const int getId() const;
	Course* const getCourses();
	Lecturer* const getHeadOfDepartment();	
	Lecturer*const* const getLecturersList();
	Practitioner*const* const getPractitionersList();
	Student*const* const getStudentsList();

	bool setName(const eDepartmentName name);
	bool setHeadOfDepartment(Lecturer* lecturer);
	bool setCoursesList(Course* courses);
	bool setLecturersList(Lecturer** lecturers);
	bool setPractitionersList(Practitioner** practitioners);
	bool setStudentsList(Student** students);

	Course* const getCourse(const char* courseName);	
	Course* const getCourse(int id);
	Student* const getStudent(const char* id);
	Worker* const getWorker(const char* name);		//-- get to every type

	bool addCourse(Course course);
	bool deleteCourse(int id);

	bool addLecturer(Lecturer* lecturer);
	bool deleteLecturer(const char* id);

	bool addPractitioner(Practitioner* practitioner);
	bool deletePractitioner(const char* id);

	bool addStudent(Student* student);
	bool deleteStudent(const char* id);

	Course*const* const getMandatoryCourses();
	Course*const* const getOptionalCourses();

	void printDetails() const;

private:
	bool setId(int id);
	bool resizeCourses();
	bool resizeLecturers();
	bool resizePractitioners();
	bool resizeStudents();
};


#endif // !__DEPARTMENT_H


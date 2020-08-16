#ifndef __DEPARTMENT_H
#define __DEPARTMENT_H

#include "Course.h"

class Department
{
private:
	enum class DepartmentName {electrical_engineering, mechanical_engineering, software_engineering, medical_engineering};
	DepartmentName name;
	int id;
	Course* courses;			//Course cannot be outside Department (array of class Courses)
	Lecturer* headOfDepartment;
	Lecturer** lecturers;
	Practitioner** practitioners;
	Student** students;	

public:
	Department(DepartmentName name, int coursesSize, Lecturer* headOfDepartment, Lecturer** lecturers, Practitioner** practitioners, Student** students);
	DepartmentName getDepartmentName();
	int getId();
	Course* getCourses();
	Lecturer* getHeadOfDepartment();	
	Lecturer** getLecturersList();
	Practitioner** getPractitionersList();
	Student** getStudentsList();

	bool setName(DepartmentName name);
	bool setHeadOfDepartment(Lecturer* lecturer);
	bool setCoursesList(Course* courses);
	bool setLecturersList(Lecturer** lecturers);
	bool setPractitionersList(Practitioner** practitioners);
	bool setStudentsList(Student** students);

	Course* getCourse(char* courseName);	
	Course* getCourse(int id);
	Student* getStudent(char* id);
	Worker* getWorker(char* name);		//-- get to every type

	bool addCourse(Course course);
	bool deleteCourse(int id);

	bool addLecturer(Lecturer* lecturer);
	bool deleteLecturer(char* id);

	bool addPractitioner(Practitioner* practitioner);
	bool deletePractitioner(char* id);

	bool addStudent(Student* student);
	bool deleteStudent(char* id);

	Course** getMandatoryCourses();
	Course** getOptionalCourses();

	void printDetails();
	~Department();

private:
	bool setId(int id);
};


#endif // !__DEPARTMENT_H


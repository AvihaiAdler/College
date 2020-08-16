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
	const int getCoursesSize() const;
	const int getLecturersSize() const;
	const int getPractitionersSize() const;
	const int getStudentsSize() const;

	const eDepartmentName getDepartmentName() const;
	const int getId() const;
	Course* getCourses();
	Lecturer* getHeadOfDepartment();	
	Lecturer** getLecturersList();
	Practitioner** getPractitionersList();
	Student** getStudentsList();

	bool setName(eDepartmentName name);
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

	const void printDetails() const;
	~Department();

private:
	bool setId(int id);
	bool resizeCourses();
	bool resizeLecturers();
	bool resizePractitioners();
	bool resizeStudents();
};


#endif // !__DEPARTMENT_H


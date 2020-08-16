#ifndef __COURSE_H
#define __COURSE_H

#include "Lecturer.h"
#include "Practitioner.h"
#include "Student.h"
#include "Room.h"

class Course
{
private:
	//Physical value:
	int studentsCapacity;

	//Logical value:
	int studentsSize;

    char* courseName;
    int courseId;
    double weight;
    Lecturer* lecturer;					//assuming 1 lecturer per course
	Practitioner* practitioner;
	Student** students;
	Room* room;
	bool mandatory;

public:
	const int getStudentsSize() const;

	bool setCourseName(char* name);
	bool setCourseId(int id);
	bool setWeight(double weight);
	bool setLectorer(Lecturer* lecturer);
	bool setPractitoner(Practitioner* practitioner);
	bool setStudentsList(Student** students);
	bool setRoom(Room* room);
	bool setStatus(bool mandatory);

	const char* getCourseName() const;
	const int getCourseId() const;
	const double getWeight() const;
	Lecturer* getLectorer();
	Practitioner* getPratitioner();
	Student** getStudentsList();
	Student* getStudent(char* id);
	Room* getRoom();
	bool isMandatory();

	bool addStudent(Student* student);
	bool deleteStudent(char* id);		//don't forget to update studentsSize

	const void printDetails() const;
	~Course();

private:
	bool resizeStudents();
};

#endif // !__COURSE_H


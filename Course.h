#ifndef __COURSE_H
#define __COURSE_H

#include "Lecturer.h"
#include "Practitioner.h"
#include "Student.h"
#include "Room.h"

class Course
{
private:
	//Physical & Logical valuses. If you pass in a high value make sure you initialize all the values or at least assign the to nullptr
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

	void printDetails();
	~Course();
};

#endif // !__COURSE_H


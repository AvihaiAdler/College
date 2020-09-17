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
    Lecturer* lecturer;					//a pointer to 1 Lecturer - assuming 1 lecturer per course
	Practitioner* practitioner;
	Student** students;					//array of pointers to Students attend to said course
	Room* room;							//a pointer to room in which the course being teached
	bool mandatory;

	bool resizeStudents(int size);

	//Use only in copy c'tor
	bool setStudentsList(Student** students);
public:
	Course(const char* courseName, int courseId, double weight, const Lecturer* lecturer, const Practitioner* practitioner, int studentsSize = 0, Room* room = nullptr, bool mandatory = false);		//init capacity (trasparent)
	Course(const Course& other);
	Course(Course&& course);
	~Course();

	int getStudentsSize() const;

	bool setCourseName(char* name);
	bool setCourseId(int id);
	bool setWeight(double weight);
	bool setLectorer(Lecturer* lecturer);
	bool setPractitoner(Practitioner* practitioner);
	bool setRoom(Room* room);
	bool setStatus(bool mandatory);

	const char* getCourseName() const;
	int getCourseId() const;
	double getWeight() const;
	const Lecturer* const getLectuorer();
	const Practitioner* const getPratitioner();
	Student*const* const getStudentsList();
	const Student* const getStudent(const char* id);
	const Room* const getRoom();
	bool isMandatory();

	bool addStudent(Student* student);
	bool deleteStudent(const char* id);		//don't forget to update studentsSize

	const Course& operator=(const Course& other);
	void operator+(const Student& student);
	void operator-(const Student& student);
	const Student& operator[](const char* studentId) const;
	friend std::ostream& operator<<(std::ostream& o, const Course& course);
};

#endif // !__COURSE_H


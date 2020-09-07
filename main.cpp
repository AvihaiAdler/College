#include <iostream>
#include "Address.h"
#include "Person.h"
#include "Worker.h"
#include "Student.h"
#include "EducationStaff.h"
#include "EmployedStudent.h"
#include "Lecturer.h"
#include "Practitioner.h"
#include "Room.h"
#include "Lab.h"
#include "Course.h"
#include "Department.h"
#include "College.h"

char* generateId(int number);

int main()
{
	/*
	genarate people = 10
	generate workers = 6
	genrate students = 4
	generate educationStaff = 4 (2 lectureres, 2 practitioners)
	generate Employed students = 2

	-------------------------------------

	generate room = 10
	generate lab = 4
	generate course = 8
	generate department = 2
	generate college = 1 (singleton?)
	*/

	char* letter = "A";
	char* str = new char[1];

	Lecturer** lecturers;
	for (int i = 0; i < 3; i++)
	{
		lecturers[i] = new Lecturer();
	}

}

char* generateId(int number)
{
	char* id = (char*) number;
	return id;
}
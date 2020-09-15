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

int main()
{
	College afeka("Afeka", "010101", Address("Tel-Aviv", "AA", "0"));
	Department software(Department::eDepartmentName(2), 1);
	Lecturer l1(EducationStaff(Worker(Person("0", "Alpha", 40, "0000", Address("Tel-Aviv", "A", "1")), Worker::eRole(0), 0, 1000, 2),  "Bcs", &software));
	Lecturer l2(EducationStaff(Worker(Person("1", "Beta", 55, "1111", Address("Tel-Aviv", "B", "20")), Worker::eRole(0), 1, 1000, 2), "Bcs", &software));

	Practitioner p1(EducationStaff(Worker(Person("2", "Charlie", 25, "2222", Address("Tel-Aviv", "C", "10")), Worker::eRole(1), 2, 500, 1), "BA", &software), &l1);
	Practitioner p2(EducationStaff(Worker(Person("3", "Delta", 29, "3333", Address("Tel-Aviv", "D", "5")), Worker::eRole(1), 3, 500, 1.5), "BA", &software), &l1);

	Student s1(Person("4", "Echo", 21, "4444", Address("Tel-Aviv", "E", "3")), &software);
	Student s2(Person("5", "Foxtrot", 21, "5555", Address("Tel-Aviv", "F", "8")), &software);
	Student s3(Person("6", "Golf", 21, "6666", Address("Tel-Aviv", "G", "22")), &software);
	Student s4(Person("7", "Hotel", 21, "7777", Address("Tel-Aviv", "H", "7")), &software);

	afeka.addDepartment(software);
	afeka.addLecturer(l1);
	afeka.addLecturer(l2);
	afeka.addPractitioner(p1);
	afeka.addPractitioner(p2);
	afeka.addStudent(s1);
	afeka.addStudent(s2);
	afeka.addStudent(s3);
	afeka.addStudent(s4);

	software.addCourse(Course("Cpp", 1212, 3, &l1, &p1));
	software.getCourse("Cpp").addStudent(&s1);

	afeka.addRoom(Room(Room::eRoomType(0), 1, 20));
	afeka.addRoom(Lab(Room(Room::eRoomType(1), 2, 10), "cpp_lab", 10));

	software.getCourse("Cpp").setRoom(&afeka.getRoom(2));
}

#ifndef __COLLEGE_H
#define __COLLEGE_H

#include "Address.h"
#include "Department.h"

const int PHONE_NUMBER_LENGTH = 10;

class College
{
private:	
	/*Physical values: When using resizeDepartment or any other resize method don't forget to update the respective capacity*/
	int departmentsCapacity;
	int workersCapacity;
	int lecturersCapacity;
	int practitionersCapacity;
	int studentsCapacity;
	int roomsCapacity;

	/*Logical Values: When using deleteDepratment for example or any other delete methods don't forget to upadte the respective size*/
	int departmentsSize;			
	int workersSize;				
	int lecturersSize;
	int practitionersSize;
	int StudentsSize;
	int roomsSize;

	char* name;
	char phoneNumber[PHONE_NUMBER_LENGTH];
	Address address;
	Department* deparments;		
	Worker** workers;			
	Lecturer** lecturers;
	Practitioner** practitioners;
	Student** students;
	Room* rooms;
	
public:
	//College(char* name, Address address, char* phoneNumber, Department* department, Worker** workers, Student** students, Room* room);
	const int getDepartmentsSize() const;
	const int getWorkersSize() const;
	const int getLecturersSize() const;
	const int getPractitionersSize() const;
	const int getStudentsSize() const;
	const int getRoomsSize() const;
	
	const char* getName() const;
	const Address& getAddress() const;	
	const char* getPhoneNumber() const;
	const Department* getDepartmentsList() const;
	const Worker** getWorkersList() const;
	const Lecturer** getLecturersList() const;
	const Practitioner** getPractitionersList() const;
	const Student** getStudentsList() const;
	const Room* getRoomsList() const;

	bool setName(char* name);
	bool setAddress(char* address);
	bool setPhoneNumber(char* phoneNumber);
	bool setDepartmentList(Department* departments);
	bool setWorkersList(Worker* workers);
	bool setStudentsList(Student** students);
	bool setRoomsList(Room* rooms);

	Department& getDepartment(char* name);
	Department& getDepartment(int departmentId);
	bool addDepartment(Department department);					
	bool deleteDepartment(int id);					

	Worker* getWorker(char* name) ;		
	Worker* getWorker(int id) ;
	bool addWorker(Worker* worker);
	bool deleteWorker(int id);

	Lecturer* getLecturer(char* id);	
	bool addLecturer(Lecturer* lecturer);			//This method should add the Lecturer to Lecturer** and to Worker**
	bool deleteLecturer(char* id);					//This method should delete the Lecturer from Lecturer** and from Worker**

	Practitioner* getPractitioner(char* id);	
	bool addPractitioner(Practitioner* practitioner);		//This method should add the Practitioner to Practitioner** and to Worker**
	bool deletePractitioner(char* id);						//This method should delete the Practitoner from Practitioner** and from Worker**

	Student* getStudent(char* id);		
	bool addStudent(Student* student);
	bool deleteStudent(char* id);

	Room* getRoom(int roomNumber);		
	bool addRoom(Room room);
	bool deleteRoom(int roomNumber);

	const void printDetails() const;
	~College();

private:
	//Don't forget to increament the respective size by 1 and delete[] the old list -- there's no set*Size() it's your responsibility to manage *Size
	bool resizedepartmentList();
	bool resizeWorkersList();
	bool resizeLecturersList();
	bool resizePractitonersList();
	bool resizeStudentsList();
	bool resizeRooms();
};

#endif

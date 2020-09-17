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
	Department* deparments;				//array of Departments 
	Worker** workers;					//array of workers
	Lecturer** lecturers;				//array of Lecturers 
	Practitioner** practitioners;		//array of Practitioners
	Student** students;					//array of Students
	Room* rooms;						//array of Rooms
	
	//Use only in copy c'tor
	bool setWorkersList(Worker** workers);
	bool setLecturersList(Lecturer** lecturers);
	bool setPractitionersList(Practitioner** practitioners);
	bool setStudentsList(Student** students);
	bool setDepartmentsList(Department** departments);
	bool setRoomsList(Room** rooms);
public:
	College(const char* name, const char* phonenumber, const Address& address, int departmentsSize = 0, int workersSize = 0, int lecturersSize = 0, int practitionersSize = 0, int StudentsSize = 0, int roomsSize = 0);	//init Capacity
	College(College& other);
	College(College&& college);
	~College();

	int getDepartmentsSize() const;	//value don't have to return const
	int getWorkersSize() const;
	int getLecturersSize() const;
	int getPractitionersSize() const;
	int getStudentsSize() const;
	int getRoomsSize() const;
	
	const char* getName() const;
	const Address& getAddress() const;	
	const char* getPhoneNumber() const;
	Department* const getDepartmentsList() const;
	Worker*const* const getWorkersList() const;
	Lecturer*const* const getLecturersList() const;
	Practitioner*const* const getPractitionersList() const;
	Student*const* const getStudentsList() const;
	Room* const getRoomsList() const;

	bool setName(const char* name);
	bool setAddress(const char* address);
	bool setPhoneNumber(const char* phoneNumber);

	Department& getDepartment(const char* name);
	Department& getDepartment(int departmentId);
	bool addDepartment(const Department& department);					
	bool deleteDepartment(int id);					

	Worker& getWorker(const char* name) ;		
	Worker& getWorker(int id) ;
	bool addWorker(const Worker& worker);
	bool deleteWorker(int id);

	Lecturer& getLecturer(const char* id);	
	bool addLecturer(const Lecturer& lecturer);					//This method should add the Lecturer to Lecturer** and to Worker**
	bool deleteLecturer(const char* id);						//This method should delete the Lecturer from Lecturer** and from Worker**

	Practitioner& getPractitioner(const char* id);	
	bool addPractitioner(const Practitioner& practitioner);		//This method should add the Practitioner to Practitioner** and to Worker**
	bool deletePractitioner(const char* id);					//This method should delete the Practitoner from Practitioner** and from Worker**

	Student& getStudent(const char* id);		
	bool addStudent(const Student& student);
	bool deleteStudent(const char* id);

	Room& getRoom(int roomNumber);		
	bool addRoom(const Room& room);
	bool deleteRoom(int roomNumber);

	const College& operator=(const College& other);
	friend std::ostream& operator<<(std::ostream& o, const College& college);

private:
	//Don't forget to increament the respective size by 1 and delete[] the old list -- there's no set*Size() it's your responsibility to manage *Size
	bool resizedepartmentList(int size);
	bool resizeWorkersList(int size);
	bool resizeLecturersList(int size);
	bool resizePractitonersList(int size);
	bool resizeStudentsList(int size);
	bool resizeRooms(int size);
};

#endif

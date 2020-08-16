#ifndef __COLLEGE_H
#define __COLLEGE_H

#include "Address.h"
#include "Department.h"

const int PHONE_NUMBER_LENGTH = 10;

class College
{
private:	
	/*Physical & Logical valuses. If you pass in a high value make sure you initialize all the values or at least assign the to nullptr
	While using deleteDepratment for example or any other delete methods don't forget to upadte the respective size*/
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

	const Department& getDepartment(char* name) const;
	const Department& getDepartment(int departmentId) const;
	bool addDepartment(Department department);					
	bool deleteDepartment(int id);					

	const Worker* getWorker(char* name) const;		//without const maybe? we might want to allow changes on Worker*
	const Worker* getWorker(int id) const;
	bool addWorker(Worker* worker);
	bool deleteWorker(int id);

	const Lecturer* getLecturer(char* id) const;	//without const maybe? we might want to allow changes on Lecturer*
	bool addLecturer(Lecturer* lecturer);			//This method should add the Lecturer to Lecturer** and to Worker**
	bool deleteLecturer(char* id);					//This method should delete the Lecturer from Lecturer** and from Worker**

	const Practitioner* getPractitioner(char* id) const;	//without const maybe? we might want to allow changes on Practitioner*
	bool addPractitioner(Practitioner* practitioner);		//This method should add the Practitioner to Practitioner** and to Worker**
	bool deletePractitioner(char* id);						//This method should delete the Practitoner from Practitioner** and from Worker**

	const Student* getStudent(char* id) const;		//without const maybe? we might want to allow changes on Student*
	bool addStudent(Student* student);
	bool deleteStudent(char* id);

	const Room* getRoom(int roomNumber) const;		//without const maybe? we might want to allow changes on Room*	
	bool addRoom(Room room);
	bool deleteRoom(int roomNumber);

	const void printDetails() const;
	~College();

private:
	//Don't forget to increament the respective size by 1 and delete[] the old list -- there's no set*Size() it's your responsibility to manage *Size
	bool resizedepartmentList(Department department);
	bool resizeWorkersList(Worker* worker);
	bool resizeLecturersList(Lecturer* lecturer);
	bool resizePractitonersList(Practitioner* practitioner);
	bool resizeStudentsList(Student* student);
	bool resizeRooms(Room room);
};

#endif

#ifndef __WORKER_H
#define __WORKER_H

#include "Person.h"

class Worker : public Person
{
private:
	enum class Role { lectorer, practitioner, janitor, adminstration_stuff, hw_grader, IT };
	int workerId;
	Role role;
	double salary, seniority;

public:
	int getWorkerId();
	Role getRole();
	double getSalary();
	double getSeniority();

	bool setRole(Role role);
	bool setSalary(double salary);
	bool setSeniority(double seniority);

	void printDetails();

private:
	bool setWorkerId(int workerId);
};

#endif
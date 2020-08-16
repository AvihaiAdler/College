#ifndef __WORKER_H
#define __WORKER_H

#include "Person.h"

class Worker : public Person
{
private:
	enum class eRole { lectorer, practitioner, janitor, adminstration_stuff, hw_grader, IT };
	int workerId;
	eRole role;
	double salary, seniority;

public:
	const int getWorkerId() const;
	const eRole getRole() const;
	const double getSalary() const;
	const double getSeniority() const;

	bool setRole(eRole role);
	bool setSalary(double salary);
	bool setSeniority(double seniority);

	const void printDetails() const;

private:
	bool setWorkerId(int workerId);
};

#endif
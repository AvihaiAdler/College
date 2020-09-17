#ifndef __WORKER_H
#define __WORKER_H

#include "Person.h"

class Worker : public Person
{
public:
	enum class eRole { lectorer, practitioner, janitor, adminstration_stuff, hw_grader, IT };
private:
	int workerId;
	eRole role;
	double salary, seniority;

	bool setWorkerId(int workerId);
public:
	Worker(const Person& person, const eRole& role, int workerId, double salary, double seniority);
	Worker(const Worker& other) = delete;
	Worker(Worker&& worker);
	virtual ~Worker();

	int getWorkerId() const;
	const eRole getRole() const;
	double getSalary() const;
	double getSeniority() const;

	bool setRole(eRole role);
	bool setSalary(double salary);
	bool setSeniority(double seniority);

	friend std::ostream& operator<<(std::ostream& o, const Worker& worker);
};

#endif
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

	virtual const Worker& operator=(const Worker& other);
	friend std::ostream& operator<<(std::ostream& o, const Worker& worker);

private:
	bool setWorkerId(int workerId);
};

#endif
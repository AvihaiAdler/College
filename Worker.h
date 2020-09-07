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
	Worker(const eRole& role, int workerId, double salary, double seniority);
	Worker(const Worker& other) = delete;
	Worker(Worker&& worker);
	~Worker();

	const int getWorkerId() const;
	const eRole getRole() const;
	const double getSalary() const;
	const double getSeniority() const;

	bool setRole(eRole role);
	bool setSalary(double salary);
	bool setSeniority(double seniority);

	const Worker& operator=(const Worker& other);
	friend std::ostream& operator<<(std::ostream& o, const Worker& worker);

private:
	bool setWorkerId(int workerId);
};

#endif
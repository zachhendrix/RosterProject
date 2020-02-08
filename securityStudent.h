#pragma once
#include "student.h"

//Declaration of the Security student class
class SecurityStudent : public Student
{

public:

	SecurityStudent(string, string, string, string, int, int*, Degree);
	Degree getDegreeProgram();
	void print();


private:
	Degree degreeProgram;


};
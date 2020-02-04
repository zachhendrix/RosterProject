#pragma once
#include "student.h"

//Declaration of the Security student class
class SecurityStudent : public Student
{

public:
	Degree getDegreeProgram();
	void print();


private:
	Degree degreeProgram;


};
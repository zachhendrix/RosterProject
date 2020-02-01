#pragma once
#include "student.h"

//Declaration of the Security student class
class SecurityStudent : public Student
{

public:
	Degree getDegreeProgram();
	void print();
	//FIXME: WATCH VIDEO TO FIGURE OUT CONSTRUCTOR WITH PARAMETERS.
	using Student::Student;

private:
	Degree degreeType;


};
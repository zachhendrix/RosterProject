#pragma once
#include "student.h"

//Declaration of the Software student class
class SoftwareStudent : public Student
{

public:
	Degree getDegreeProgram();
	void print();

	//FIXME: WATCH VIDEO TO FIGURE OUT CONSTRUCTOR WITH PARAMETERS.
	using Student::Student;

private:
	Degree degreeProgram;

};
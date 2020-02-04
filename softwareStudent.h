#pragma once
#include "student.h"

//Declaration of the Software student class
class SoftwareStudent : public Student
{

public:
	Degree getDegreeProgram();
	void print();


private:
	Degree degreeProgram;

};
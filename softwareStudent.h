#pragma once
#include "student.h"

//Declaration of the Software student class
class SoftwareStudent : public Student
{

public:

	SoftwareStudent(string, string, string, string, int, int*, Degree);
	Degree getDegreeProgram();
	void print();


private:
	Degree degreeProgram = NETWORK;

};
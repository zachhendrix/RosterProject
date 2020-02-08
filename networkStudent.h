#pragma once
#include "student.h"


//Declaration of the Network Student class
class NetworkStudent : public Student 
{
public:

	NetworkStudent(string, string, string, string, int, int*, Degree);
	Degree getDegreeProgram();
	void print();


private:
	Degree degreeProgram;
};
#pragma once
#include "student.h"


//Declaration of the Network Student class
class NetworkStudent : public Student 
{
public:
	Degree getDegreeProgram();
	void print();


private:
	Degree degreeProgram;
};
#pragma once
#include "student.h"


//Declaration of the Network Student class
class NetworkStudent : public Student 
{

public:
	virtual Degree getDegreeProgram();
	using Student::Student;

private:
	Degree degreeType = NETWORK;


};
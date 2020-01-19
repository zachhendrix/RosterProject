#pragma once
#include "student.h"


//Declaration of the Network Student class
class NetworkStudent : public Student 
{

public:
	virtual degree getDegreeProgram();
	using Student::Student;

private:
	degree degreeType = NETWORK;


};
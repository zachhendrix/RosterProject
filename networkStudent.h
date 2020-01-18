#pragma once
#include "student.h"


class NetworkStudent : public Student 
{

public:
	virtual degree getDegreeProgram();
	using Student::Student;

private:
	degree degreeType = NETWORK;


};
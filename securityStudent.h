#pragma once
#include "student.h"

//Declaration of the Security student class
class SecurityStudent : public Student
{

public:
	virtual degree getDegreeProgram();
	using Student::Student;

private:
	degree degreeType = SECURITY;


};
#pragma once
#include "student.h"

//Declaration of the Security student class
class SecurityStudent : public Student
{

public:
	virtual Degree getDegreeProgram();
	using Student::Student;

private:
	Degree degreeType = SECURITY;


};
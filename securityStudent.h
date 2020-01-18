#pragma once
#include "student.h"


class SecurityStudent : public Student
{

public:
	virtual degree getDegreeProgram();
	using Student::Student;

private:
	degree degreeType = SECURITY;


};
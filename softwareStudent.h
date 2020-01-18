#pragma once
#include "student.h"


class SoftwareStudent : public Student
{

public:
	virtual degree getDegreeProgram();
	using Student::Student;

private:
	degree degreeType = SOFTWARE;


};
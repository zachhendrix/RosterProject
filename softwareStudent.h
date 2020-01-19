#pragma once
#include "student.h"

//Declaration of the Software student class
class SoftwareStudent : public Student
{

public:
	virtual degree getDegreeProgram();
	using Student::Student;

private:
	degree degreeType = SOFTWARE;


};
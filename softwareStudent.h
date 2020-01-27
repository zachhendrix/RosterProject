#pragma once
#include "student.h"

//Declaration of the Software student class
class SoftwareStudent : public Student
{

public:
	virtual Degree getDegreeProgram();
	using Student::Student;

private:
	Degree degreeType = SOFTWARE;


};
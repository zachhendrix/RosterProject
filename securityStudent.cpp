#include "securityStudent.h"
#include <iostream>

//Definition of the Security Student class that overrides the Get degree program function for section D3
Degree SecurityStudent::getDegreeProgram()
{
	return degreeType;
}
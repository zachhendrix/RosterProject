#include "softwareStudent.h"
#include <iostream>



SoftwareStudent::SoftwareStudent(string SID, string FN, string LN, string EMA, int SA, int* DIC, Degree) : Student(SID, FN, LN, EMA, SA, DIC)
{
}

//Definition of the Software Student class that overrides the Get degree program function for section D3
Degree SoftwareStudent::getDegreeProgram()
{
	return degreeProgram;
}

void SoftwareStudent::print()
{
}

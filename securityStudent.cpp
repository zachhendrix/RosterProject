#include "securityStudent.h"
#include <iostream>



SecurityStudent::SecurityStudent(string SID, string FN, string LN, string EMA, int SA, int* DIC, Degree) : Student(SID, FN, LN, EMA, SA, DIC)
{
}

//Definition of the Security Student class that overrides the Get degree program function for section D3
Degree SecurityStudent::getDegreeProgram()
{
	return degreeProgram;
}

void SecurityStudent::print()
{
	//FIXME: THIS DOES NOT MODEL THE SAMPLE, DO NOT MODEL THE SAMPLE PAY ATTENTION TO E3.C, IT TELLS YOU HOW TO CODE THIS FUNCTION.
}

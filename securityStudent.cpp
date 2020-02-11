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
	cout << "\t" << "First Name: " << getFN() << "\t" << "Last Name: " << getLN() << "\t" << "Age: " << getSA()
		<< "\t" << "Days In Course: "; cout << getDIC()[0] << ", " << getDIC()[1] << ", " << getDIC()[2];
	cout << " Degree Program: Security" << '\n';
}

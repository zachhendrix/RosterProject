#include "networkStudent.h"
#include <iostream>



NetworkStudent::NetworkStudent(string SID, string FN, string LN, string EMA, int SA, int* DIC, Degree DEG) : Student(SID, FN, LN, EMA, SA, DIC)
{
	degreeProgram = DEG;
}

//Definition of the Network Student class that overrides the Get degree program function for section D3
Degree NetworkStudent::getDegreeProgram()
{
	return degreeProgram;
}

void NetworkStudent::print()
{
	cout << getSID() << "\t" 
		<< "First Name: " << getFN() 
		<< "\t" << "Last Name: " << getLN() 
		<< "\t" << "Age: " << getSA()
		<< "\t" << "Days In Course: "; cout << getDIC()[0] << ", " << getDIC()[1] << ", " << getDIC()[2];
	cout << " Degree Program: Network"  << '\n';
}

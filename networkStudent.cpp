#include "networkStudent.h"
#include <iostream>



NetworkStudent::NetworkStudent(string SID, string FN, string LN, string EMA, int SA, int* DIC, Degree) : Student(SID, FN, LN, EMA, SA, DIC)
{

}

//Definition of the Network Student class that overrides the Get degree program function for section D3
Degree NetworkStudent::getDegreeProgram()
{
	return degreeProgram;
}

void NetworkStudent::print()
{
}

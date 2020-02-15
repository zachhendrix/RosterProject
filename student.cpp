
#include <iostream>
#include "student.h"
#include <string>

using namespace std;



//Definitions of getters or accessors from section D2.A
string Student::getSID()
{
	return studentID;
}

string Student::getFN()
{
	return firstName;
}

string Student::getLN()
{
	return lastName;
}

string Student::getEMA()
{
	return emailAddress;
}

int Student::getSA()
{
	return age;
}

int* Student::getDIC()
{
	return daysInCourse;
}



//Definitions of setters for mutators from section D2.A
void Student::setSID(string SID)
{
	studentID = SID;
}

void Student::setFN(string FN)
{
	firstName = FN;
}

void Student::setLN(string LN)
{
	lastName = LN;
}

void Student::setEMA(string EMA)
{
	emailAddress = EMA;
}

void Student::setSA(int SA)  
{
	age = SA;
}

void Student::setDIC(int *DIC)
{
	daysInCourse[0] = DIC[0];
	daysInCourse[1] = DIC[1];
	daysInCourse[2] = DIC[2];

}

//Definition of the constructor that uses all elements of the table for section D2.C
Student::Student(string SID, string FN, string LN, string EMA, int SA, int* DIC, Degree DEG)
{
	studentID = SID;
	firstName = FN;
	lastName = LN;
	emailAddress = EMA;
	age = SA;
	daysInCourse[0] = DIC[0];
	daysInCourse[1] = DIC[1];
	daysInCourse[2] = DIC[2];


}





//Definition of the deconstructor from section D2.E
Student::~Student()
{

}



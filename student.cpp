
#include <iostream>
#include "student.h"
#include "degree.h"
#include <string>

using namespace std;




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

degree Student::getDegreeType()
{
	return degree();
}




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
	for (int i = 0; i < 3; i++) {
		daysInCourse[i] = DIC[i];
	}
}
void Student::setDegreeType(degree DT)
{
	degreeType = DT;
}

Student::Student(string SID, string FN, string LN, string EMA, int SA, int* DIC, degree DT)
{
	setSID(SID);
	setFN(FN);
	setLN(LN);
	setEMA(EMA);
	setSA(SA);
	setDIC(DIC);
	setDegreeType(DT);
}

void Student::print()
{

	int* daysInCourse = getDIC();

	cout << getSID() << "\t";
	cout << "First Name: " << getFN() << endl;
	cout << "Last Name: " << getLN() << endl;
	cout << "Email:" << getEMA() << endl;
	cout << "Age: " << getSA() << endl;
	cout << "daysInCourse: {" << daysInCourse[0] << "," << daysInCourse[1] << "," << daysInCourse[2] << "}" << endl;

	cout << "Degree Program: ";
	switch (getDegreeProgram()) 
	{
	case 0: cout << "Security";
		break;
	case 1: cout << "Networking";
		break;
	case 2: cout << "Software";
		break;
	}
	cout << "\n";
}

Student::~Student()
{
}

degree Student::getDegreeProgram()
{
	return SECURITY;
}


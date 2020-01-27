
#include <iostream>
#include "student.h"
#include "degree.h"
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

Degree Student::getDegreeType()
{
	return Degree();
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
	for (int i = 0; i < 3; i++) {
		daysInCourse[i] = DIC[i];
	}
}
void Student::setDegreeType(Degree DT)
{
	degreeType = DT;
}

//Definition of the constructor that uses all elements of the table for section D2.C
Student::Student(string SID, string FN, string LN, string EMA, int SA, int* DIC, Degree DT)
{
	setSID(SID);
	setFN(FN);
	setLN(LN);
	setEMA(EMA);
	setSA(SA);
	setDIC(DIC);
	setDegreeType(DT);
}


//Definition of the virtual print to "print" specific student data for section D2.D
void Student::print()
{

	int* daysInCourse = getDIC();

	cout << getSID() << "\t";
	cout << "First Name: " << getFN() << "\t";
	cout << "Last Name: " << getLN() << "\t";
	cout << "Email:" << getEMA() << "\t";
	cout << "Age: " << getSA() << "\t";
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

//Definition of the deconstructor from section D2.E
Student::~Student()
{

}


//Definition of the virtual "getDegreeProgram" from section D2.F 
Degree Student::getDegreeProgram()
{
	return Degree();
}

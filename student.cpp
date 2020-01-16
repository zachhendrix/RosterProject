#include <iostream>
#include "Student.h"
#include "Degree.h"
#include <string>

using namespace std;

Student::Student()
{

}

Student::Student(string SID, string SFN, string SLN, string SEM, int SAGE, int* nmDays)
{
	studentID = SID;
	firstName = SFN;
	lastName = SLN;
	emailAddress = SEM;
	age = SAGE;


}

	string Student::getSID()
	{
		return studentID;
	}

	void Student::setSID(string SID)
	{
		studentID = SID;
	}

	string Student::getFN()
	{
		return firstName;
	}

	void Student::setFN(string SFN)
	{
		firstName = SFN;
	}

	string  Student::getLN()
	{
		return lastName;
	}

	void  Student::setLN(string SLN)
	{
		lastName = SLN;
	}

	string  Student::getEM()
	{
		return emailAddress;
	}

	void  Student::setEM(string SEM)
	{
		emailAddress = SEM;
	}

	int  Student::getAge()
	{
		return age;
	}

	void  Student::setAge(int SAGE)
	{
		age = SAGE;
	}

	//Variable numDaysToComplete does not work after return like the rest of the variables?
	int Student::getNumDaysToComplete()
	{
		return 0;
	}

	void Student::SetNumDaysToComplete(int daylength1, int daylength2, int daylength3)
	{


	}
	
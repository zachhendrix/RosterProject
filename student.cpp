
#include <iostream>
#include "student.h"
#include "degree.h"
#include <string>

using namespace std;


//Getters for the variables in "student.h"
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

int Student::getAge()
{
	return age;
}

int* Student::daysinCourse()
{
	return daysInCourse;
}

void Student::setSID(int age)
{

}

#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;



class Student
{
	//Variables declared in the Student class
	int studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToComplete[1];

	//Degree type is populated in subclasses only.
	DegreeClass::DegreeType Degree;
};

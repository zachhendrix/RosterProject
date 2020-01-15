#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;



class Student {
private:
	//Variables declared in the Student class
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToComplete[1];

public:
	string getSID()
	{
		return studentID;
	}

	string setSID(string SID)
	{
		studentID = SID;
	}

	//Degree type is populated in subclasses only.
	DegreeClass::DegreeType Degree;
};

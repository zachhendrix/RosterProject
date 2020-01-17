#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student
{

public:


private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToComplete[3];
	string degree;

};


#endif
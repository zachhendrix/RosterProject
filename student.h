#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;


class Student
{
public:
	string getSID();
	string getFN();
	string getLN();
	string getEMA();
	int getAge();
	int *daysinCourse();


	void setSID(int);

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];



};
#endif
#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student
{
public:


	Student();

	Student(string SID, string SFN, string SLN, string SEM, int SAGE, int* nmDays);

	string getSID();
	string getFN();
	string getLN();
	string getEM();
	int getAge();
	int getNumDaysToComplete();

	void setSID(string studentID);
	void setFN(string firstName);
	void setLN(string lastName);
	void setEM(string emailAddress);
	void setAge(int age);
	void SetNumDaysToComplete(int daylength1, int daylength2, int daylength3);


private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToComplete[3];

};
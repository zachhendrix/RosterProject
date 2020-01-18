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
	int getSA();
	int *getDIC();
	degree getDegreeType();

	void setSID(string);
	void setFN(string);
	void setLN(string);
	void setEMA(string);
	void setSA(int);
	void setDIC(int[3]);
	void setDegreeType(degree);

	Student(string, string, string, string, int, int*, degree);
	
	virtual void print();

	~Student();

	virtual degree getDegreeProgram();


private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	degree degreeType;
};
#endif
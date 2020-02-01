#pragma once
#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

//Declaration of the student class 
class Student
{

public:
	//Declarations of getters or accessors for section D2.A 
	string getSID();
	string getFN();
	string getLN();
	string getEMA();
	int getSA();
	int *getDIC();


	//Declarations of setters or mutators for section D2.B
	void setSID(string SID);
	void setFN(string FN);
	void setLN(string LN);
	void setEMA(string EMA);
	void setSA(int SA);
	void setDIC(int*);


	//Declaration of the constructor that uses all elements of the table for section D2.C
	Student(string, string, string, string, int, int*);
	

	//Declaration of the virtual print to "print" specific student data for section D2.D
	virtual void print() = 0;

	//Declaration of the deconstructor from section D2.E
	~Student();


	//Declaration of the virtual "getDegreeProgram" from section D2.F 
	virtual Degree getDegreeProgram() = 0;


//declaration of the variables in section D1
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
};

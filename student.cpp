#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;



class Student {
public:
	//Variables declared in the Student class
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDaysToComplete[1];


	Student(string SID, string SFN, string SLN, string SEM, int SAGE)
	{

	}

	string getSID()
	{
		return studentID;
	}

	string setSID(string SID)
	{
		studentID = SID;
	}

	string getFN()
	{
		return firstName;
	}

	string setFN(string SFN)
	{
		firstName = SFN;
	}

	string getLN()
	{
		return lastName;
	}

	string setLN(string SLN)
	{
		lastName = SLN;
	}

	string getEM()
	{
		return emailAddress;
	}

	string setEM(string SEM)
	{
		emailAddress = SEM;
	}

	int getAge()
	{
		return age;
	}

	int setAge(int SAGE)
	{
		age = SAGE;
	}
	
	

	//TO FIX: Getter Setter for numDaysToComplete isnt working for some reason.
	//TO FIX: Where and how do I put the getter and setter for the Degree?
	
	void print();

	~Student()
	{

	}


	//Degree type is populated in subclasses only
	DegreeClass::DegreeType Degree;
};

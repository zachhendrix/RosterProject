#include <iostream>
#include <sstream>
#include "roster.h"
#include "student.h"

using namespace std;



int main()
{
	cout << "Scripting and Programming - Applications - C867 \n";
	cout << "C++ \n";
	cout << "#001220147 \n";
	cout << "Zach Hendrix \n\n";
	Roster classRoster;

	//The Student Data table specified in section A, including my personal information
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Zach,Hendrix,zhendr2@wgu.edu,27,30,30,30,SOFTWARE"
	};

	for(int i = 0; i<5; i++)
	{ 
		string temp = studentData[i];
		//Second step: parse temp 
		//Third step: pass parsed data to add
	}


	//Required for section F4 

	classRoster.printAll();


	classRoster.printInvalidEmails();

	/*
	//loop through classRosterArray and for each element:
	classRoster.printAverageDaysInCourse(current_object's student id);
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	*/
}


void Roster::add(string SID, string FN, string LN, string EMA, int SA, int DIC1, int DIC2, int DIC3, Degree degreeProgram)
{
	int courseDays[3] = { DIC1, DIC2,DIC3 };

		//FIXME: Create constructors for the subclasses
	/*
		if (degreeProgram = SECURITY)
		{
			classRosterArray[addIndex++] = new SecurityStudent(SID,FN);
		}

		if (degreeProgram = NETWORK)
		{
			classRosterArray[addIndex++] = new NetworkStudent();
		}

		if (degreeProgram = SOFTWARE)
		{
			classRosterArray[addIndex++] = new SoftwareStudent();
		}
		*/
}

void Roster::remove(string StudentID)
{
}

void Roster::printAll()
{

}

void Roster::printAverageDaysInCourse(string StudentID)
{
	
}

void Roster::printInvalidEmails()
{
}

void Roster::printByDegreeProgram(Degree degreeProgram)
{
}


Roster::~Roster()
{

}
#include <iostream>
#include <sstream>
#include "roster.h"
#include "student.h"

using namespace std;



int main()
{
	cout << "Scripting and Programming - Applications - C867 \n";
	cout << "Programming Language used : C++ \n";
	cout << "Student ID: #001220147 \n";
	cout << "Student Name: Zach Hendrix \n\n";

	//The Student Data table specified in section A, including my personal information
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Zach,Hendrix,zhendr2@wgu.edu,27,30,30,30,SOFTWARE"
	};

	//Instance of roster called classRoster for section F2
	Roster classRoster;
	Degree myDegree;
	

	//Parses data that is passed to the "add" function which adds it to the classRosterArray for section E2 and F3
	for(int i = 0; i < 5; i++)
	{ 
		string temp = studentData[i];
		istringstream ss(temp);
		string token;
		string tempHolder[9];

		int j = 0;
		while (getline(ss, token, ',')) 
		{
			tempHolder[j] = token;
			j++;
		}


		if (tempHolder[8] == "SECURITY") 
		{
			myDegree = SECURITY;
		}

		else if (tempHolder[8] == "NETWORK") 
		{
			myDegree = NETWORK;
		}

		else if (tempHolder[8] == "SOFTWARE")
		{
			myDegree = SOFTWARE;
		}

		classRoster.add(tempHolder[0], tempHolder[1], tempHolder[2], tempHolder[3], stoi(tempHolder[4]), stoi(tempHolder[5]), stoi(tempHolder[6]), stoi(tempHolder[7]), myDegree);
	}


	//Required for section F4 
	classRoster.printAll();
	classRoster.printInvalidEmails();
	classRoster.printAverageDaysInCourse("A5");
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.printByDegreeProgram(SECURITY);
	classRoster.printByDegreeProgram(NETWORK);
	classRoster.remove("A3");
	classRoster.remove("A3");

}

//Adds each of the tokenized strings into the classRosterArray for section E2.A
//Defines the add function for section E3.A
void Roster::add(string SID, string FN, string LN, string EMA, int SA, int DIC1, int DIC2, int DIC3, Degree degreeProgram)
{
	int courseDays[3] = { DIC1, DIC2,DIC3 };

		if (degreeProgram == SECURITY)
		{
			classRosterArray[addIndex++] = new SecurityStudent(SID, FN, LN, EMA, SA, courseDays, degreeProgram);
		}

		if (degreeProgram == NETWORK)
		{
			classRosterArray[addIndex++] = new NetworkStudent(SID, FN, LN, EMA, SA, courseDays, degreeProgram);
		}

		if (degreeProgram == SOFTWARE)
		{
			classRosterArray[addIndex++] = new SoftwareStudent(SID, FN, LN, EMA, SA, courseDays, degreeProgram);
		}
}


//Defines the "remove" function that removes student by StudentID and prints "No student found" for section E3.B
void Roster::remove(string StudentID)
{

	bool valueFound = false;
	for (int i = 0; i < 5; i++)
	{
		if (classRosterArray[i] != nullptr && classRosterArray[i]->getSID() == StudentID)
		{
			classRosterArray[i] = nullptr;
			valueFound = true;
			break;
		}
	}
		
	if (valueFound == false)	
	{	
		cout << "No Student with the ID " << StudentID << " was found in the roster." << endl;
	}


	
};

//Defines the printAll function that prints a complete tab seperated list of student data using accessor functions for E3.C
void Roster::printAll()
{
	cout << "Displaying roster:" << '\n';
	cout << endl;
	for (int i = 0; i < 5; i++) 
	{
		(*classRosterArray[i]).print();
	}
	cout << '\n';
}


//Defines printAverageDaysInCourse function which takes the three day values for the student and averages them for section E3.D
void Roster::printAverageDaysInCourse(string StudentID)
{
	for (int i = 0; i < 5; i++) 
	{
		if ((*classRosterArray[i]).getSID() == StudentID) 
		{
			int average = 0;
			average = ((*classRosterArray[i]).getDIC()[0] + (*classRosterArray[i]).getDIC()[1]+ (*classRosterArray[i]).getDIC()[2]) / 3;
			cout << "The average days it took for student: " << StudentID << " to finish 3 courses is: " << average << '\n';
		}
	}
	cout << '\n';

}

//Defines printInvalidEmails function which verifies student email addresses and displays invalids for section E3.E
void Roster::printInvalidEmails()
{
	cout << "The following emails are invalid:" << '\n';
	cout << endl;
	for (int i = 0; i < 5; i++) 
	{
		bool hasAtChar = false;
		bool hasPeriodChar = false;
		bool hasSpaceChar = false;
		string emailString;
		emailString = (*classRosterArray[i]).getEMA();

		for (char charVal : emailString) 
		{

			if (charVal == '@') 
			{
				hasAtChar = true;
			}

			if (charVal == '.') 
			{
				hasPeriodChar = true;
			}

			if (charVal == ' ') 
			{
				hasSpaceChar = true;
			}

		}

		if (hasAtChar == false || hasPeriodChar == false || hasSpaceChar == true) {
			cout << (*classRosterArray[i]).getEMA() << '\n';
		}
	}
	cout << '\n';
}


//Defines the printByDegreeProgram function which prints out student info for a degree program specified by an enumerated type for section E3.F
void Roster::printByDegreeProgram(int degreeProgram)
{
	Degree degreeVal;
	if (degreeProgram == SECURITY) 
	{
		cout << "Displaying students in the Security Degree Program: " << endl;
		degreeVal = SECURITY;
	}

	if (degreeProgram == NETWORK) 
	{
		cout << "Displaying students in the Networking Degree Program: " << endl;
		degreeVal = NETWORK;
	}

	if (degreeProgram == SOFTWARE) 
	{
		cout << "Displaying students in the Software Program: " << endl;
		degreeVal = SOFTWARE;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		if (degreeVal == (*classRosterArray[i]).getDegreeProgram()) 
		{
			(*classRosterArray[i]).print();
		}
	}
	cout << '\n';
}

Roster::~Roster()
{

}
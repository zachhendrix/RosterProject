#include <iostream>
#include <string>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

class Roster 
{
public:
	void add(string SID, string FN, string LN, string EMA, int SA, int DIC1, int DIC2, int DIC3, Degree degreeProgram);

	void remove(string StudentID);

	void printAll();

	void printAverageDaysInCourse(string StudentID);

	void printInvalidEmails();

	void printByDegreeProgram(Degree degreeProgram);


	~Roster();



private:
	//Array of pointers to hold the data provided in the studentData table for section E1
	Student* classRosterArray[5];
	int addIndex = 0;


};
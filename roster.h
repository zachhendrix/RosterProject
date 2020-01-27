#include <iostream>
#include <string>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

class Roster {
public:
	void add(string SID, string FN, string LN, string EMA, int SA, int DIC1, int DIC2, int DIC3, Degree degreeProgram);

	~Roster();

	//Array of pointers to hold the data provided in the studentData table for section E1
	Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
};
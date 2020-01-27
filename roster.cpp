#include <iostream>
#include <sstream>
#include "roster.h"

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





}


void Roster::add(string SID, string FN, string LN, string EMA, int SA, int DIC1, int DIC2, int DIC3, Degree degreeProgram)
{
	int courseDays[3] = { DIC1, DIC2,DIC3 };

	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
		if (classRosterArray[i] == nullptr) {
			if (degreeProgram == NETWORK) {
				classRosterArray[i] = new NetworkStudent(SID, FN, LN, EMA, SA, courseDays, degreeProgram);
			}
			else if (degreeProgram == SECURITY) {
				classRosterArray[i] = new SecurityStudent(SID, FN, LN, EMA, SA, courseDays, degreeProgram);
			}
			else if (degreeProgram == SOFTWARE) {
				classRosterArray[i] = new SoftwareStudent(SID, FN, LN, EMA, SA, courseDays, degreeProgram);
			}

			break;
		}
	}
}








Roster::~Roster()
{

}
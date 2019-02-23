#include <iostream>
#include <string>
#include <sstream>
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "roster.h"

using namespace std;

Degree returnDegreeEnum(string deg) {
	if (deg == "NETWORK") {
		return NETWORK;
	}
	else if (deg == "SECURITY") {
		return SECURITY;
	}
	else {
		return SOFTWARE;
	}
}

int main() {

	//My student info as as required in F1
	cout << "******************My Student Info******************" << endl;
	cout << "Course Name: Scripting and Programming - Applications - C867" << endl;
	cout << "Programming Language Used: C++ via Microsoft Visual Studio" << endl;
	cout << "Student ID: #001086219" << endl;
	cout << "Student Name: Patrick S. Flynn / PFLYN11@WGU.EDU" << endl << endl;

	const string studentData[] ={ 
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	//Requirement A1
	"A5,Patrick,Flynn,pflynn11@wgu.edu,27,25,35,50,SOFTWARE" 
	};

	Roster classRoster;
	classRoster.populateArrayNulls();

	cout << "******************Student Roster******************" << endl;
	//Main for loop to create roster for each student in student data
	for (int i = 0; i < numStudents; i++) {

		istringstream studentString(studentData[i]);
		string commaSeparatedString;
		string stagingArray[numDataFields];

		int j = 0;

		/* For each comma separated string in each student data array value, add it to a temporary
		staging array that will be looped through and sent to add method */
		while (getline(studentString, commaSeparatedString, ',')) {
			stagingArray[j] = commaSeparatedString;
			j++;
		}

		int numDaysInCourse[3] = { stoi(stagingArray[5]), stoi(stagingArray[6]), stoi(stagingArray[7]) };

		/* Test couts to make sure staging array is populated -- uncomment for test
		cout << stagingArray[0] << endl;
		cout << stagingArray[1] << endl;
		cout << stagingArray[8] << endl;
		*/

		Degree degreeProgram = returnDegreeEnum(stagingArray[8]);
		
		classRoster.add(i, stagingArray[0], stagingArray[1], stagingArray[2], stagingArray[3], stoi(stagingArray[4]), numDaysInCourse, degreeProgram);

	}

	
	for (int i = 0; i < numStudents; i++) {
		classRoster.classRosterArray[i]->print();
	}
	

	return 0;
}

void Roster::add(int thisStudent, string studentID, string firstName, string lastName, string emailAddress, int age, int *numDaysToComplete, Degree degreeProgram) {
	switch (degreeProgram) {
		case NETWORK:
			classRosterArray[thisStudent] = new networkStudent(studentID, firstName, lastName, emailAddress, age, numDaysToComplete, degreeProgram);
			break;
		case SECURITY:
			classRosterArray[thisStudent] = new securityStudent(studentID, firstName, lastName, emailAddress, age, numDaysToComplete, degreeProgram);
			break;
		case SOFTWARE:
			classRosterArray[thisStudent] = new softwareStudent(studentID, firstName, lastName, emailAddress, age, numDaysToComplete, degreeProgram);
			break;
	}
	
};
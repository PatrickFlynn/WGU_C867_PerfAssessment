#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "roster.h"

using namespace std;

int main() {

	//My student info as as required in F1
	cout << "Course Name: Scripting and Programming - Applications - C867" << endl;
	cout << "Programming Language Used: C++ via Microsoft Visual Studio" << endl;
	cout << "Student ID: #001086219" << endl;
	cout << "Student Name: Patrick S. Flynn / PFLYN11@WGU.EDU" << endl;

	const string studentData[] ={ 
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	//Requirement A1
	"A5,Patrick,Flynn,pflynn11@wgu.edu,27,25,35,50,SOFTWARE" 
	};

	Roster classRoster;

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

		/* Test couts to make sure staging array is populated -- uncomment for test
		cout << stagingArray[0] << endl;
		cout << stagingArray[1] << endl;
		*/
	}

	if (classRoster.classRosterArray[0] == nullptr) {
		cout << "Null!";
		cout << numStudents;
	}

	return 0;
}
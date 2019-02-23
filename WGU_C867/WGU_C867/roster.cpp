#include <iostream>
#include <string>
#include "student.h"

using namespace std;

//Req A
	//Add personal data to last array item in student data (DONE)
//Req B
	//Add all 11 files (DONE)
//Req C
	//Add enumerated data types (DONE)
//Req D
	//D1 - Create base class student with variables
	//D2 - Create functions for student class
		//D2A - Accessor
		//D2B - Mutator
		//D2C - Constructor with all variables
		//D2D - Virtual print to print specific data
		//D2E - Destructor
		//D2F - virtual get degree program
	//D3 - Creation of three subclasses
//Req E
	//E1 - Array of pointers, classRosterArray to hold student data
	//E2 - 
	//E3
//Req F
	//F1
	//F2
	//F3
	//F4
	//F5


int main() {

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

	return 0;
}
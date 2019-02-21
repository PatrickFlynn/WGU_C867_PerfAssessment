#include <iostream>
#include "student.h"
#include <vector>
using namespace std;

void main() {
	cout << "Course Name: Scripting and Programming - Applications - C867" << endl;
	cout << "Programming Language Used: C++ via Microsoft Visual Studio" << endl;
	cout << "Student ID: #001086219" << endl;
	cout << "Student Name: Patrick S. Flynn" << endl;
	/*
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Patrick,Flynn,pflynn11@wgu.edu,27,25,35,50,SOFTWARE" };

	string* classRosterArray[] = &studentData;
	*/

	//Definte a struct to retrieve each part of student data array and give them proper data types
	//Then create a new student object for each student

	vector<int> tests(3);
	Student Patrick("A5", "Patrick", "Flynn", "pflynn11@wgu.edu", 27, tests, "SOFTWARE");
	//Patrick.setAge(27);
	cout << Patrick.getAge() << endl;
	cout << Patrick.getEmail() << endl;
	
	return;
}
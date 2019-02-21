#include <string>
#include <vector>
#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
#endif // !STUDENT_H_

class Student {

public:
	void printAge();
	Student(); //Default constructor

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	//vector<int> daysToCompleteCourses;
	string degreeTypes;
};


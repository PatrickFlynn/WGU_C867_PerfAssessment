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
	//ToDo Create constructor with all values
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, vector<int> daysToCompleteCourses, string degreeTypes) {
		this->studentID = studentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;
		this->daysToCompleteCourses = daysToCompleteCourses;
		this->degreeTypes = degreeTypes;
	};
	//ToDo Create destructor

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	vector<int> getDaysToComplete();
	string getDegreeProgram();

	void setStudentID();
	void setFirstName();
	void setLastName();
	void setEmail();
	void setAge();
	void setDaysToComplete();
	void setDegreeProgram();

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	vector<int> daysToCompleteCourses;
	string degreeTypes;
};


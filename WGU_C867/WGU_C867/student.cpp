#include <iostream>
#include <string>
#include "student.h"
using namespace std;

//Getter Funcs
string Student::getID() {
	return studentID;
}
string Student::getFirstName() {
	return firstName;
};
string Student::getLastName() {
	return lastName;
};
string Student::getEmail() {
	return emailAddress;
};
int Student::getAge() {
	return age;
};
int *Student::getDaysToComplete() {
	return numDaysToComplete;
};
Degree Student::getDegreeType() {
	return degreeProgram;
};

//Setter Funcs
void Student::setID(string studentID) {
	this->studentID = studentID;
}
void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::setLastName(string lastName) {
	this->lastName = lastName;
}
void Student::setEmail(string emailAddress) {
	this->emailAddress = emailAddress;
}
void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysToComplete(int *numDaysToComplete) {
	for (int i = 0; i < 3; i++) {
		this->numDaysToComplete[i] = numDaysToComplete[i];
	}
}
void Student::setDegreeProgram(Degree degreeProgram)
{
	this->degreeProgram = degreeProgram;
}

//Constructor that calls setter functions
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDaysToComplete[3], Degree degreeProgram) {
	setID(studentID);
	setFirstName(firstName);
	setLastName(lastName);
	setEmail(emailAddress);
	setAge(age);
	setDaysToComplete(numDaysToComplete);
	setDegreeProgram(degreeProgram);
};

//destructor
Student::~Student() {

}
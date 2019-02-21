#include <string>
#include <vector>
#include "student.h"
using namespace std;

//default constructor
Student::Student() {
	studentID = "NA";
	firstName = "NONE";
	lastName = "NONE";
	emailAddress = "NONE";
	age = 0;
	vector <int> getDaysToComplete(3, 0);
	string getDegreeProgram = "TEST";
	return;
};

//Function to printout students age
void Student::printAge() {
	cout << age;
};

//Getter Function Definitions
string Student::getStudentID(){
	return studentID;
};
string Student::getFirstName() {
	return firstName;
};
string Student::getLastName() {
	return lastName;
};
string Student::getEmail() {
	return emailAddress;
};
int Student::getAge(){
	return age;
};
vector<int> Student::getDaysToComplete() {
	return daysToCompleteCourses;
};
string Student::getDegreeProgram() {
	return degreeTypes;
};

//Setter Function Definitions
void Student::setStudentID() {
	return;
};
void Student::setFirstName() {
	return;
};
void Student::setLastName() {
	return;
};
void Student::setEmail() {
	return;
};
void Student::setAge() {
	return;
};
void Student::setDaysToComplete() {
	return;
};
void Student::setDegreeProgram() {
	return;
};
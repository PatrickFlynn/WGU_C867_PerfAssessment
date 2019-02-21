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
	//daysToCompleteCourses = vector<int> 
	string degreeTypes = "TEST";
	return;
};

//Function to printout students age
void Student::printAge() {
	cout << age;
};
#include <string>
#include "student.h"
using namespace std;

const int numStudents = 5;
const int numDataFields = 9;

Degree returnDegreeEnum(string deg);

class Roster {
	
public:

	Student *classRosterArray[numStudents];

	void populateArrayNulls() {
		for (int i = 0; i < numStudents; i++) {
			classRosterArray[i] = nullptr;
		}
	}

	void add(int ArrayPos, string studentID, string firstName, string lastName, string emailAddress, int age, int numDaysToComplete[3], Degree degreeProgram);

	void printAll();

	void printInvalidEmails();

	void printAverageDaysInCourse(string studentID);

	void printByDegreeProgram(Degree degreeProgram);

	void remove(string studentID);

	~Roster();

};

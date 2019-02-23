#ifndef Student_H
#define Student_H

#include <string> 
#include "degree.h"
using namespace std;

class Student {

	public:

		//Getter Funcs
		string getID();
		string getFirstName();
		string getLastName();
		string getEmail();
		int getAge();
		int *getDaysToComplete();
		Degree getDegreeType();

		//Setter Funcs
		void setID(string);
		void setFirstName(string);
		void setLastName(string);
		void setEmail(string);
		void setAge(int);
		void setDaysToComplete(int[3]);
		void setDegreeType(Degree);

		//Constructor
		Student(string, string, string, string, int, int*, Degree);

		//Virtual Print
		//To Do
		//Destructor
		~Student();
		//Virtual Get Degree Program
		//To Do


	private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int numDaysToComplete[3];
		Degree degreeProgram;
};

#endif // !Student_H

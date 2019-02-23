#ifndef Software_H
#define Software_H

#include "student.h"
using namespace std;

class softwareStudent : public Student {
	
	public:
		using Student::Student;
		string getDegreeType();
	private:
		Degree degreeProgram;
		

};

#endif
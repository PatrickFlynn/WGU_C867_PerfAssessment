#ifndef Network_H
#define Network_H

#include "student.h"
using namespace std;

class networkStudent : public Student {

public:
	using Student::Student;
	string getDegreeType();

private:
	Degree degreeProgram;
	

};

#endif
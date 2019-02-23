#ifndef Security_H
#define Security_H

#include "student.h"
using namespace std;

class securityStudent : public Student {

public:
	using Student::Student;
	string getDegreeType();
private:
	Degree degreeProgram;
};

#endif
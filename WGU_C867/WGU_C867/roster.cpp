#include <iostream>
#include "student.h"
using namespace std;

void main() {

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Patrick,Flynn,pflynn11@wgu.edu,27,25,35,50,SOFTWARE" };

	Student Patrick;
	Patrick.printAge();

	return;
}
#include "student.h"
#include "degree.h"
#include "roster.h"

//initialize constructor
Student::Student() {

	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	
	for (int i = 0; i < daysToCompleteClass; i++) {
		this->daysToComplete[i] = 0;
	}
	
	this->degreeprogram = UNDECIDED;		//default degree program
}

//full constructor
Student::Student(string studentID, string firstName, string lastName, string email,
				 int age, int daysToComplete[], DegreeProgram degreeProgram) {

	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;

	for (int i = 0; i < daysToCompleteClass; i++) {
		this->daysToComplete[i] = daysToComplete[i];
	}

	this->degreeprogram = degreeProgram;
}

//destructor
Student::~Student(){}

//getters
string Student::getStudentID() { 
	return studentID; 
}
string Student::getFirstName() { 
	return firstName; 
}
string Student::getLastName() { 
	return lastName; 
}
string Student::getEmail() { 
	return email; 
}
int Student::getAge() {
	return age; 
}
int* Student::getDaysToComplete() { 
	return daysToComplete; 
}
DegreeProgram Student::getDegreeProgram() { 
	return degreeprogram; 
}

//setters
void Student::setStudentId(string studentID) { 
	this->studentID = studentID; 
}
void Student::setFirstName(string firstName) { 
	this->firstName = firstName; 
}
void Student::setLastName(string lastName) { 
	this->lastName = lastName; 
}
void Student::setEmail(string email) { 
	this->email = email; 
}
void Student::setAge(int age) { 
	this->age = age; 
}
void Student::setDaysToComplete(int daysToComplete[])
{
	for (int i = 0; i < daysToCompleteClass; i++) {
		this->daysToComplete[i] = daysToComplete[i];
	}
}
void Student::setDegreeType(DegreeProgram degreeProgram) { this->degreeprogram = degreeProgram; }
//print method for student header
void Student::printHeader() {
	std::cout << " ID" << " | First " << "| Last " <<"| Email Address " <<"| Age " <<"| Days In Course " <<"| Degree Program" 
			  << std::endl << std::endl;
}
//print method
void Student::print(){
	std::cout << getStudentID() << "\t" <<
				 getFirstName() << "\t" <<
				 getLastName() << "\t" <<
				 getEmail() << "\t" <<
				 getAge() << "\t" <<
				 getDaysToComplete()[0] << ", " <<
				 getDaysToComplete()[1] << ", " <<
				 getDaysToComplete()[2] << ", \t" <<
				 degreeProgramString[(int)getDegreeProgram()] << std::endl;
}

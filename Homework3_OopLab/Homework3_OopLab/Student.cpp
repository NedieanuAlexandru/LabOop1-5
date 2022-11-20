#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

class Student {
	
public:
	string name;
	string school;
	int age;
	int grade;
	Student() {};
	Student(string name, string school, int age, int grade) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->grade = grade;
	}
};
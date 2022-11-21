#include <iostream>
#include "Rectangle.cpp"
#include "Student.cpp"
#include "ComplexNumber.cpp"
#include <list>
#include <algorithm>
using namespace std;

void comparePerimeter(Rectangle r1, Rectangle r2) {
	int p1 = r1.calculatePerimeter();
	int p2 = r2.calculatePerimeter();

	if (p1 < p2)
		cout << "Perimeter 1 < 2";
	else
		cout << "Perimeter 1 > 2";
}
void compareArea(Rectangle r1, Rectangle r2) {
	int a1 = r1.calculateArea();
	int a2 = r2.calculateArea();

	if (a1 < a2)
		cout << "Area 1 < Area 2";
	else
		cout << "Area 1 > Area 2";
}
void searchStudent(list<Student> students, Student theStudent) {
	list<std::string>::iterator it;
	it = std::find(students.begin(), students.end(), theStudent);
	if (it != students.end()){
		cout << "the students exists in list " << std::endl;
	}
	else{
		cout << "the student does not exists in list" << std::endl;
	}
}

void studentHighestGrade(list<Student> students) {
	Student student;
	for (const auto& studentInt : students) {
		if (student.grade < studentInt.grade)
			student = studentInt;
	}
	for (const auto& studentInt : students) {
		if(studentInt.grade == student.grade)
		   cout << studentInt.name << " " << student.grade;
	}
}

void sumComplex(ComplexNumber C1, ComplexNumber C2){
	ComplexNumber temp;
	temp.real = C1.real + C2.real;
	temp.imaginary = (C1.imaginary + C2.imaginary);
	cout << temp.real << " " << temp.imaginary;
}

void prodComplex(ComplexNumber c1, ComplexNumber c2) {
	int prod1 = c1.real * c2.real;
	int prod2 = c1.imaginary * c2.imaginary;
	int prod3 = (c1.real + c1.imaginary) * (c2.real + c2.imaginary);
	int real = prod1 - prod2;
	int imag = prod3 - (prod1 + prod2);
	cout << real << " + " << imag << "i";
}

int main() {

    Rectangle r1 = Rectangle(5, 10);
    Rectangle r2 = Rectangle(4, 8);
    comparePerimeter(r1, r2);
    compareArea(r1, r2);

	Student st1 = Student("St1", "School1", 24, 7);
	Student st2 = Student("St2", "School2", 17, 6);
	Student st3 = Student("St3", "School3", 25, 10);
	list<Student> studentsList = { st1, st2, st3 };
	studentsList.sort();
	searchStudent(studentsList, st1);

	list<Student> students = { st1, st2, st3 };
	studentHighestGrade(students);

	ComplexNumber c1 = ComplexNumber(1, 2);
	ComplexNumber c2 = ComplexNumber(3, 4);
	sumComplex(c1, c2);
	prodComplex(c1, c2);

	return 0;
}

 
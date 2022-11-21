#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

//2.1
void swap(int& a, int& b) {
    int change = a;
    a = b;
    b = change;
}

//2.2
int roundFloat(float n, bool isRoundedTo100){
    if (isRoundedTo100) {
        int nr = static_cast<int>(n);
        if (nr % 100 < 50) {
            return nr - (nr % 100);
        }
        return nr + 100 - (nr % 100);
    }
    return static_cast<int>(round(n));
}

//2.3
struct Student{
    int age;
    float grade;
    string name;
};
Student studentWithMaxGrade(const list<Student>& listOfStudents){
    Student student;
    for (const auto& studentInt : listOfStudents){
        if (student.grade < studentInt.grade)
            student = studentInt;
    }
    return student;
}

//2.4
string timeToString(long milisecs){
    milisecs = time(0);
    time_t current = milisecs; char nr[255];
    strftime(nr, sizeof nr, "%Y-%m-%d %H:%M:%S", localtime(&current));
    string timeResult = nr;
    return timeResult;
}
//Overload timeToString
std::string timeToString(){
    time_t current = time(0); char nr[255];
    strftime(nr, sizeof nr, "%Y-%m-%d %H:%M:%S", localtime(&current));
    string timeResult = nr;
    return timeResult;
}

//2.5
int sizeFunction(int x){
    return sizeof(x);
}
int sizeFunction(double x){
    return sizeof(x);
}
int sizeFunction(char* x){
    return static_cast<int>(strlen(x)); 
}
 
int main(){
    int a = 5; int b = 12;
    swap(a, b);
    cout << "a = " << a << " " << "b = " << b << "\n\n";
 
    float nr = 67.5f;
    cout << roundFloat(nr, true);
  
    list<Student> students = { {21, 6.7f, "student 1"}, {22, 6.8f, "student 2"}, {23, 6.9f, "student 3"} };
    Student bestStudent = studentWithMaxGrade(students);
    cout << bestStudent.name << '\n';
 
    long theTime = 237238975;
    cout << timeToString(theTime);

    return 0;
}
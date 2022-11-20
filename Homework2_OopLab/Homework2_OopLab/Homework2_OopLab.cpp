#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

//2.1
void swapElements(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

//2.2
int roundFloat(float n, bool isRoundedTo100){
    if (isRoundedTo100) {
        int nAux = static_cast<int>(n);
        if (nAux % 100 < 50) {
            return nAux - (nAux % 100);
        }
        return nAux + 100 - (nAux % 100);
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
    for (const auto& studentIter : listOfStudents){
        if (student.grade < studentIter.grade)
            student = studentIter;
    }
    return student;
}

//2.4
string timeToString(long milisecs){
    milisecs = time(0);
    time_t current = milisecs; char aux[255];
    strftime(aux, sizeof aux, "%Y-%m-%d %H:%M:%S", localtime(&current));
    string timeResult = aux;
    return timeResult;
}
//Overload timeToString
std::string timeToString(){
    time_t current = time(0); char aux[255];
    strftime(aux, sizeof aux, "%Y-%m-%d %H:%M:%S", localtime(&current)); 
    string timeResult = aux;
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
    swapElements(a, b);
    cout << "a = " << a << " " << "b = " << b << "\n\n";
 
    float nr = 67.5f;
    cout << roundFloat(nr, true);
  
    list<Student> students = { {20, 7.5f, "student 1"}, {22, 6.5f, "student 2"}, {19, 9.2f, "student 3"} };
    Student bestStudent = studentWithMaxGrade(students);
    cout << bestStudent.name << '\n';
 
    long theTime = 237238975;
    cout << timeToString(theTime);

    return 0;
}
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;
 
//T 4.1
class Person {
public:
	string name;
	int age;
	Person(string name, int age) {};
};
class GroupOfFriends {
public:
	string groupName;
	list<Person> friends;

	list<Person> createGroup() {
		int nr = 0; 
		list<Person> newGroupFriends;
		cout << "Enter the number of Friends: "; cin >> nr;
		for (int i = 0; i < nr; i++) {
			string name; int age;
			cout << "Friend #" << i << " ";
			cout << "Name = "; cin >> name;
			cout << "Age = "; cin >> age;
			newGroupFriends.push_back({ name, age });
		}
		return newGroupFriends;
	}
	void displayPersonsInGroup() {
		for (Person person : friends) {
			cout << person.name << " ";
		}
		cout << '\n';
	}
	void addPerson(Person personToBeAdded) {
		friends.push_back(personToBeAdded);
	}
	void removePerson(Person personToBeRemoved) {
		bool isFound = false;
		for (Person person : friends) {
			if (person.name == personToBeRemoved.name) {
				isFound = true; break;
			}
		}
		if (isFound) 
			friends.remove(personToBeRemoved);
		else cout << "The person is not in the list \n";
	}
	void updatePerson(Person personToBeUpdated){ 
		string newName; int newAge;
		cout << "Enter Updated Data:\n";
		cout << "Updated Name:"; cin >> newName;
		cout << "Updated Age:"; cin >> newAge;
		for (Person person : friends) {
			if (person.name == personToBeUpdated.name) {
				person.name = newName;
				person.age = newAge;
			}
		}
	}
	GroupOfFriends() {};
};

//T 4.2
class Student {
private:
	int note;
	string name;
public:
	void setNote(int n) {
		note = n;
	}
	int getNote() {
		return note;
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	Student(int note, string name) {
		this->note = note;
		this->name = name;
	}
};
class StudentsGroup {
private:
	int studentsNumber;
	list<Student> studentsList;
public:
	void showStudentsInGroup() {
		for (Student student : studentsList) {
			cout << student.getName() << "\n";
		}
	}
	int getMaxGrade() {
		int maxGrade = -1;
		for (Student student : studentsList) {
			if (student.getNote() > maxGrade) 
				maxGrade = student.getNote();
		}
		return maxGrade;
	}
	Student studentWithMaxGrade() {
		int maxGrade = getMaxGrade();
		for (Student student : studentsList) {
			if (student.getNote() == maxGrade) {
				return student;
			}
		}
	}
	//T4.3
	Student firstStudentWithFirstGrade5() {
		for (Student student : studentsList) {
			if (student.getNote() == 5)
				return student;
		}
	}
	StudentsGroup() {};
};

//T4.4
class Driver {
public:
	string name;
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
};
class Car {
public:
	int age;
	Driver driver;
	Car(int age, Driver driver) {
		this->age = age;
		this->driver = driver;
	}
	//T 4.6
	string documentLicense;
	string documentRegistration;
	string giveLicense() {
		return documentLicense;
	}
	string giveRegistration() {
		return documentRegistration;
	}
};
void exchangeDrivers(Car car1, Car car2) {
	Driver auxDriver = car1.driver;
	car1.driver = car2.driver;
	car2.driver = auxDriver;
	cout << car1.driver.getName()<< " " <<car2.driver.getName();
}

int main(){
	return 0;
}


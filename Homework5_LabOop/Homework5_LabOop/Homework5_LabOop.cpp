#include <iostream>
using namespace std;

//T 5.1
class A{
public:
	int aa;
    void testA() {
        cout << "IN A";
    }
protected:
	int ab;
private:
	int ac;
};
class B : public A{
public:
    int ba;
    void testB() {
        cout << "IN B";
    }
protected:
    int bb;
private:
    int bc;
};
class C : public B
{
public:
    int ca;
    void testC() {
        cout << "IN C";
    }
protected:
    int cb;
private: 
    int cc;

};

//T 5.2
class Form {
protected:
    string name;
public:
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
    //T 5.3
    int computeArea() {}
    Form(string name) {
        cout << "In Form Constructor";
        this->name = name;
    }
    ~Form() { 
        cout << "In Form Destructor";
        name = ""; 
    }
};
class Rectangle :public Form {
protected:
    int width;
    int height;
public:
    void setWidth(int width) {
        this->width = width;
    }
    int getWidth() {
        return this->width;
    }
    void setHeight(int height) {
        this->height = height;
    }
    int getHeight(int height) {
        return this->height;
    }
    //T 5.4
    int computeArea() {
        return width * height;
    }
Rectangle(int width, int height) {
    cout << "In Rectangle constructor";
    this->setWidth(width);
    this->setHeight(height);
}
~Rectangle() {
    cout << "In Rectangle destructor";
    this->width = 0;
    this->height = 0;
}
};
int main()
{
    A aObject; aObject.testA();
    B bObject; bObject.testB();
    C cObject; cObject.testC();

	return 0;
}

 
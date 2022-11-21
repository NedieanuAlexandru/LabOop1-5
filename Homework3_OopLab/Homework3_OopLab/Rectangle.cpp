#include "Rectangle.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Rectangle {
	int l = 0; int L = 0;

public:
	float calculatePerimeter() {
	    return (2 * l + 2 * L);
	}

	float calculateArea() {
		if (l == L) {
			cout << "Not a Rectangle";
			exit(0);
		}
		return l * L;
	}

	Rectangle() {}
	Rectangle(int l, int L) {
		this->l = l;
		this->L = L;
	}
};
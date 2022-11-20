#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Triangle {
	float a = 0.0f; float b = 0.0f;float c = 0.0f;

public:
	float calculatePerimeter() {
	    return (a + b + c);
	}
	float calculateArea() {
		if (a < 0 || b < 0 || c < 0 || (a + b <= c) || a + c <= b || b + c <= a) {
			cout << "Not a valid triangle";
			exit(0);
		}
		float s = (a + b + c) / 2;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	Triangle() {}
	Triangle(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
};
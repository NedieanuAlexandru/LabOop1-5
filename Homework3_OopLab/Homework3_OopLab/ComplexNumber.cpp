#include "ComplexNumber.h"
#include <iostream>
using namespace std;

class ComplexNumber {
public: 
	int real, imaginary;
	  ComplexNumber(int tempReal = 0, int tempImaginary = 0)
	  {
		  real = tempReal;
		  imaginary = tempImaginary;
	  }
};
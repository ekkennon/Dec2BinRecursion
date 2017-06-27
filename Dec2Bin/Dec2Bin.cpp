// Dec2Bin.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <limits>

using namespace std;
using namespace System;

void ConvertByRecursion(long long n);
long long getDecimal();

int main()
{
	long long n;
	cout << "Welcome to the Decimal to Binary Converter" << endl;
	n = getDecimal();
	while (n != 0) {
		ConvertByRecursion(n);
		cout << endl << endl;
		n = getDecimal();
	}
	cout << "\nThanks for using the decimal converter";
	system("Pause");
    return 0;
}

long long getDecimal() {
	long long n;
	
	return n;
}

void ConvertByRecursion(long long n) {

}

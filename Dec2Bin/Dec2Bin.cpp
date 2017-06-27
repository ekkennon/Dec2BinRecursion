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
	bool baddata;

	do {
		baddata = false;
		cout << "Please enter your decimal value to convert: ";
		cin >> n;
		if (!cin.good()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Your data was bad so I could not decipher your input as a decimal value." << endl;
			baddata = true;
		}
		else if (n < 0) {
			cout << "Please enter a positive value." << endl;
			baddata = true;
		}
	} while (baddata);
	return n;
}

void ConvertByRecursion(long long n) {

}

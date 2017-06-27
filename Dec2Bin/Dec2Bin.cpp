// Dec2Bin.cpp : main project file. Created by Erin K Kennon

#include "stdafx.h"
#include <iostream>
#include <limits>
#include <string>
#include <math.h>

using namespace std;
using namespace System;

long long getDecimal();
string getBinary();
void ConvertByRecursion(long long n);
void ConvertByArray(string n);

int main()
{
	int choice;
	cout << "Welcome to the Decimal to Binary Converter" << endl;
	cout << "Enter 1 for Dec-Bin or 2 for Bin-Dec (0 to exit): ";
	cin >> choice;
	while (choice > 0) {
		if (choice == 1) {
			long long n = getDecimal();
			ConvertByRecursion(n);
			cout << endl << endl;
		}
		else if (choice == 2) {
			string n = getBinary();
			ConvertByArray(n);
			cout << endl << endl;
		}
		cout << "Enter 1 for Dec-Bin or 2 for Bin-Dec (0 to exit): ";
		cin >> choice;
	}
	cout << "\nThanks for using the decimal converter" << endl;
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

string getBinary() {
	string n;
	bool baddata = true;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while(baddata) {
		n = "";
		baddata = false;
		cout << "Please enter your binary value to convert: ";
		
		getline(cin, n);

		for (char& c : n) {//c++ has for each loops !!!
			if (c != '0' && c != '1') {
				baddata = true;
			}
		}
		if (baddata) {
			cout << "A binary number contains only 0 and 1. (Press Enter)";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	return n;
}

void ConvertByRecursion(long long n) {
	long long remainder;
	long long nextvalue;
	remainder = n % 2;
	nextvalue = n / 2;
	Console::WriteLine("Decimal {0,12:D} divided by 2 = {1,12:D} with remainder of {2, 3:D} ",n,nextvalue,remainder);
	if (nextvalue > 0) {
		ConvertByRecursion(nextvalue);
	}
	else {
		cout << "\nTherefore the binary value is: ";
	}
	cout << remainder;
}

void ConvertByArray(string n) {
	int result = 0;
	const int expmod = n.length() - 1;

	for (int i = 0; i < n.length(); i++) {
		if (n[i] == '1') {
			int exponent = expmod - i;
			int posval = pow(2, exponent);
			result += posval;
			Console::WriteLine("There is a {0,1:D} in the value (2^{1,2:D})",posval,exponent);
		}
	}
	cout << "Therefore the decimal value is: " << result <<endl;
}

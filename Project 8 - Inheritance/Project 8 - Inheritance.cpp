// Author: Parker Padgett
// Assignment: Project 8 - Inheritance
// Description: Use inheritance and create a parent class, and a child class
//				that inherits from the parent class. Move the parent class to 
//				a header file, and get data, and output data to the screen. 
// Date: 3/31/2022


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>
#include <vector>
#include <math.h>
#include "person.h"

using namespace std;

class student : public person
{
public: 
	// Set functions
	void setStudentGPA(double number)
	{
		gpa = number;
	}
	void setStudentMajor(string text)
	{
		major = text;
	}
	void setStudentCreditHours(double number)
	{
		hours = number;
	}
	void setStudentGraduationYear(int num)
	{
		year = num;
	}

	// Get functions
	double getStudentGPA()
	{
		return gpa;
	}
	string getStudentMajor()
	{
		return major;
	}
	double getStudentCreditHours()
	{
		return hours;
	}
	int getStudentGraduationYear()
	{
		return year;
	}

private:
	// Variables
	double gpa, hours;
	string major;
	int year;
};


// Function declaration
void input(student parker[10]);
void output(student parker[10]);


int main()
{
	student parker[10];

	input(parker); // get data from user
	system("CLS"); // clear the screen to make it look better
	output(parker); // output data from user


	return 0;
}

void input(student parker[10])
{
	string tempS;
	int tempI;
	double tempD;

	for (int a = 0; a <= 1; a++)
	{
		cout << "Enter your first name: ";
		getline(cin, tempS);
		parker[a].setFirstName(tempS);

		cout << "Enter your last name: ";
		getline(cin, tempS);
		parker[a].setLastName(tempS);

		cout << "Enter your street address: ";
		getline(cin, tempS);
		parker[a].setStreetAddress(tempS);

		cout << "Enter your city: ";
		getline(cin, tempS);
		parker[a].setCity(tempS);

		cout << "Enter your state: ";
		getline(cin, tempS);
		parker[a].setState(tempS);

		cout << "Enter your zip code: ";
		cin >> tempI;
		parker[a].setZip(tempI);
		cin.ignore();

		cout << "Enter your phone number: ";
		getline(cin, tempS);
		parker[a].setPhoneNumber(tempS);

		cout << "Enter your GPA: ";
		cin >> tempD;
		parker[a].setStudentGPA(tempD);
		cin.ignore();

		cout << "Enter your major: ";
		getline(cin, tempS);
		parker[a].setStudentMajor(tempS);

		cout << "Enter your credit hours: ";
		cin >> tempD;
		parker[a].setStudentCreditHours(tempD);
		cin.ignore();

		cout << "Enter your anticipated year of graduation: ";
		cin >> tempI;
		parker[a].setStudentGraduationYear(tempI);
		cin.ignore();
	}
}

void output(student parker[10])
{
	for (int a = 0; a <= 1; a++)
	{
		cout << "Name: " << parker[a].getFirstName() << " " << parker[a].getLastName() << endl;
		cout << "Street Address: " << parker[a].getStreetAddress() << endl;
		cout << "City: " << parker[a].getCity() << endl;
		cout << "State: " << parker[a].getState() << endl;
		cout << "Zip: " << parker[a].getZip() << endl;
		cout << "Phone Number: " << parker[a].getPhoneNumber() << endl;
		cout << "GPA: " << parker[a].getStudentGPA() << endl;
		cout << "Major: " << parker[a].getStudentMajor() << endl;
		cout << "Credit Hours: " << parker[a].getStudentCreditHours() << endl;
		cout << "Anticipated Year of Graduation: " << parker[a].getStudentGraduationYear() << endl << endl;
	}
}
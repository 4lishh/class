#include "stdafx.h"
#include "GradeBook.h"
#include <iostream>
#include <iomanip>
using namespace std;


GradeBook::GradeBook(string name)
{
	setCourseName(name);
}


void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		courseName = name.substr(0, 25);
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n " << "limiting courseName to first 25 characters. \n" << endl;
	}
}


string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::dissplayMessage()
{
	cout << "welcome to the GradeBook for \n " << getCourseName() << "! \n" << endl;
}

void GradeBook::determineClassAverage()
{
	int total = 0;
	int gradeCounter = 0;
	int grade;
	double average;

	cout << "enter grade or -1 to quit: " << endl;
	cin >> grade;

	while (grade != -1)
	{
		total = total + grade;
		gradeCounter++;

		cout << " enter grade or -1 to quit: " << endl;
		cin >> grade; 
	}

	if (gradeCounter != 0)
	{
		average = static_cast<double>(total) / gradeCounter;
		cout << " \n total of all " << gradeCounter << " grades entered is " << total << endl;
		cout << " class average is " << setprecision(2) << fixed << average << endl;
	}
	else
		cout << " no grades are entered" << endl;
}
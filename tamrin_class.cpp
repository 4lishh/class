// tamrin_class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;


int main()
{
	GradeBook myGradeBook("professional c++");
	myGradeBook.dissplayMessage();
	myGradeBook.determineClassAverage();
	cin.get();
	cin.get();

}


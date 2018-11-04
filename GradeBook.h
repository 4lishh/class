#pragma once
#include <string>
using namespace std;
class GradeBook
{
public:
	GradeBook(string);
	void setCourseName(string);
	string getCourseName();
	void dissplayMessage();
	void determineClassAverage();

private:
	string courseName;
};


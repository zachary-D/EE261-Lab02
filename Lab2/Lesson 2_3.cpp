#include <iostream>
#include <string> 

using std::cout;
using std::endl;
using std::cin;
using std::string;

namespace name
{
	const string first = "Zachary";
	const string middle = "William";
	const string last = "Damato";

	//These functions return the name, formatted different ways
	string getFirstLast() { return first + " " + last; }
	string getLastFirst() { return last + ", " + first; }
}

namespace date
{
	const string day = "8";
	const string month = "9";
	const string year = "2017";

	//Returns the date formatted in moth-day-year format
	string getTime_MDY() { return month + ":" + day + ":" + year; }
}

int main()
{
	cout << name::getFirstLast() << endl << endl;
	cout << date::getTime_MDY() << endl;
	cin.get();
	return 0;
}
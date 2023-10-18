#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Date
{
public:
	//void Init(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;

	return 0;
}
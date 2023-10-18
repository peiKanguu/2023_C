#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc…Í«Îø’º‰ ß∞‹");
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//int main()
//{
//	Stack s1;
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//
//	Stack s2(s1);
//	return 0;
//}

class Date
{
public:
	Date(int year, int minute, int day)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date & d)
	{
		cout << "Date(const Date& d):" << this << endl;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

Date Test(Date d)
{
	Date temp(d);
	return temp;
}

int main()
{
	Date d1(2022, 1, 13);
	Test(d1);
	return 0;
}
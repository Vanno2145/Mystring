#include "String.h"
#include <iostream>

using namespace std;

String::String()
{
	lenth = 80;
	string = new char[lenth];
}

String::String(int l)
{
	lenth = l;
	string = new char[lenth];
}

String::String(const char* s)
{
	lenth = strlen(s);
	string = new char[lenth + 1];
	strcpy_s(string, lenth + 1, s);
}

void String::Copy(String& s)
{
	string = new char[s.lenth + 1];
	strcpy_s(string, s.lenth + 1, s.string);

	lenth = s.lenth;
}

void String::Init()
{
	int l;
	cout << "Enter max lenth: ";
	cin >> l;
	lenth = l;

	char* s = new char[ l ];
	cout << "Enter text: ";
	cin >> s;

	string = new char[l + 1];
	strcpy_s(string, l, s);
}

void String::Print()
{
	cout << string << endl;
}

String::~String()
{
	delete[] string;
}

#pragma once
class String
{
	char* string;
	int lenth;
public:
	String();
	String(int l);
	String(const char* s);


	void Copy(String& s);
	void Init();
	void Print();

	~String();
};


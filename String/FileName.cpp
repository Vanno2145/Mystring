#include <iostream>
#include "String.h"
using namespace std;

int main() {
	String s;
	
	s.Init();

	cout << "Your string: " << endl; 
	s.Print();
}
//============================================================================
// Name        : HelloWorld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string str = "I love you";
	char a[str.length()];
	strcpy(a, str.c_str());
	for(int i = 0; i < str.length(); i++)
	cout << a[i] << endl; // prints !!!Hello World!!!
	string str1(a);
	cout << str1 << endl;
	return 0;
}
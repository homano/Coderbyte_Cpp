#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

	string str = "I love you";
	int len = str.length();
	char arr[len], temp[len];
	strcpy(arr, str.c_str());
	strcpy(temp, str.c_str());
	for (int i = 0; i < len; i++)
		temp[len-1-i] = arr[i];
	string str1(temp);
	string str2(arr);
	cout << len << endl;
	cout << str1.length() << endl;
	cout << str2.length() << endl;

	str = str1;
	cout << str1 << endl;
	cout << str2 << endl;

	return 0;

}



#include <iostream>
using namespace std;

string LetterCapitalize(string str) {
 if(str.at(0) >= 'a' && str.at(0) <= 'z'){
   str.at(0) = char(str.at(0) -32);
   cout << str.at(0) << endl;
 }
  for (int i = 1; i < int(str.length()); i++){
    if (str.at(i-1) == ' ' && str.at(i) >= 'a' && str.at(i) <= 'z')
      str.at(i) = char(str.at(i) -32);
  }
  // code goes here
  return str;

}

int main(){
	string str = "hello world";
	cout << LetterCapitalize(str);
	return 0;
}
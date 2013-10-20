#include <iostream>
#include <string>
using namespace std;

string LetterChanges(string str) {

  // code goes here
  for(int i = 0; i < int(str.length()); i++){
  if(str.at(i) >= 'A' && str.at(i) < 'Z')
           str.at(i) = char(str.at(i) + 1);
  if (str.at(i) == 'z' || str.at(i) == 'Z')
        str.at(i) = 'A';
    if(str.at(i) >= 'a' && str.at(i) < 'z'){
      str.at(i) = char(str.at(i) + 1);
      if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u')
        str.at(i) = toupper(str.at(i));
    }
  }
  return str;
}


int main() {
  string str = "hello*3";
  // keep this function call here
  cout << LetterChanges(str);
  return 0;
}
















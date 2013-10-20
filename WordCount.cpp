#include <iostream>

using namespace std;

int WordCount(string str) {
  int count = 0;
  if (str[0] >= 'a' || str[0] <= 'z' || str[0] >= 'A' || str[0] <= 'Z')
	  ++count;
  for(int i = 1; i < int(str.size()); i++){
	  if((str[i] >= 'a' || str[i] <= 'z' || str[i] >= 'A' || str[i] <= 'Z') && str[i-1] == ' ')
		  ++count;
  }
  return count;

}

int main() {
  string str = "I hat it love you";
  // keep this function call here
  cout << WordCount(str);
  return 0;

}
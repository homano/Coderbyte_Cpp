#include <iostream>
#include <sstream>
using namespace std;

string IntString(int num){
  stringstream ss;
  ss << num;
  return ss.str();
}

string RunLength(string str) {
  int count = 1;
  string str1;
  for(size_t i = 1; i < str.size(); i++){
    if (str[i] != str[i-1]){
      str1+= IntString(count) + str[i-1];
      count = 1;
      if (i == str.size() - 1)
    	  str1+= IntString(1) + str[i];
    }
    if (str[i] == str [i-1]){
      count ++;
      if(i == str.size() - 1)
    	  str1+= IntString(count) + str[i];
    }
  // code goes here
  }
  return str1;
}

int main() {
  string str = "aabbcde";
  // keep this function call here
  cout << RunLength(str) << endl;
  return 0;

}


















#include <iostream>
using namespace std;

string SimpleSymbols(string str) {

  // code goes here
  bool judge = true;
  if((str.at(0) >= 'a' && str.at(0) <= 'z') || (str.at(0) >= 'A' && str.at(0) <= 'Z'))
    judge = false;
  int i = int(str.length()) - 1;
  if((str.at(i) >= 'a' && str.at(i) <= 'z') || (str.at(i) >= 'A' && str.at(i) <= 'Z'))
	judge = false;

  for (int j = 1; j < i - 1; j++){
	  if((str.at(j) >= 'a' && str.at(j) <= 'z') || (str.at(j) >= 'A' && str.at(j) <= 'Z')){
		  if (str.at(j-1) != '+' || str.at(j+1) != '+')
			  judge = false;
	  }
  }
  if(judge) return "true";
  return "false";


}

int main() { 
  
  // keep this function call here
  cout << SimpleSymbols(gets(stdin));
  return 0;
    
} 
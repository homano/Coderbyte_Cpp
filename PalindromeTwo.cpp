#include <iostream>
using namespace std;

string PalindromeTwo(string str) { 
  string str1, str2;
  int len = int(str.size());
  for (int i = 0; i < len; i++){
    if((str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z' ))
      str1+=tolower(str[i]);
    if((str[len-1-i] >= 'a' && str[len-1-i] <= 'z' ) || (str[len-1-i] >= 'A' && str[len-1-i] <= 'Z' ))
      str2+=tolower(str[len-1-i]);
  }

  if (str1 == str2)
    return "true";
  // code goes here
  return "false";
  // code goes here   
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << PalindromeTwo(gets(stdin));
  return 0;
    
} 















  
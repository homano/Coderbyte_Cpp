#include <iostream>
using namespace std;

string StringScramble(string str1, string str2) { 
	int char_index;
	for (size_t i = 0; i < str2.size(); i++){
		if(str1.find(str2[i]) == string::npos)
			return "false";
		else{
			char_index = str1.find(str2[i]);
			str1 = str1.substr(0, char_index) + str1.substr(char_index + 1);
		}
	}
  // code goes here   
  return "true"; 
            
}


int main() { 
  
  // keep this function call here
  cout << StringScramble(gets(stdin));
  return 0;
    
} 
#include <iostream>

using namespace std;

int VowelCount(string str) {
  int count = 0;
  for(int i = 0; i < int(str.size()); i++){
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      ++count;
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
      ++count;
  }
  // code goes here
  return count;

}

int main() {
  string str = "I love you";
  // keep this function call here
  cout << VowelCount(str);
  return 0;

}
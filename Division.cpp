#include <iostream>
using namespace std;

int Division(int num1, int num2) { 
  int mini = (num1 < num2) ? num1 : num2;
  int maxcom = 1;
  for (int i = 2; i <= mini; i++)
    if (num1 % i == 0 && num2 % i == 0)
    maxcom = i;
  // code goes here   
  return maxcom; 
            
}

int main() { 
  
  // keep this function call here
  cout << Division(gets(stdin));
  return 0;
    
} 
#include <iostream>
using namespace std;

string PrimeTime(int num) { 
  int count = 0, mid = num/2;
  if (num <= 1)
    cout << "wrong input" << endl;
  if (num == 2) 
    return "true";
  for (int i = 2; i <= mid; i++){
    if (num % i == 0) count ++;
  }
  if (count >= 1) return "false";
  // code goes here   
  return "true"; 
            
}

int main() { 
  
  // keep this function call here
  cout << PrimeTime(gets(stdin));
  return 0;
    
} 
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int PrimeMover(int num) {
  vector<int> prime;
  bool isprime[10001];
  for (int i = 0; i <= 10000; i++)
	  isprime[i] = true;
  int mid = int(sqrt(9999));

  for (int i = 3; i <= mid; i+=2){
	  for(int j = i; j * i <= 9999; j+=2){
		  isprime[i*j] = false;
	  }
  }
  prime.push_back(2);
  for (int k = 3; k <= 9999; k+=2){
	  if(isprime[k] == true)
		  prime.push_back(k);


  }
  return prime[num-1];
            
}

int main() { 
  
  // keep this function call here
  cout << PrimeMover(gets(stdin));
  return 0;
    
} 















  
#include <iostream>
#include <cmath>

using namespace std;

string ArithGeo(int a[], int size) {
  int diff, factor;
  bool arith = true, geo = true;
  if (size <= 1) return "array too short";
  diff = a[1] - a[0];
  if (isfinite(a[1]/a[0])) factor =  a[1]/a[0];
  for(int i = 2; i < size; i++){
    arith = arith && ((a[i]-a[i-1] == diff) ? true : false);
    geo = geo && ((a[i]/a[i-1] == factor) ? true : false) ;
  }
  if (arith == true) return "Arithmetic";
  if (geo == true) return "Geometric";
  else return "-1";

}


int main() { 
   
  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. 
     To see how to enter arrays as arguments in C++ scroll down */
     
  int A[] = gets(stdin);
  int size = int(sizeof(A)/sizeof(A[0]));
  cout << ArithGeo(A,size) << endl;
  return 0;
    
} 















  
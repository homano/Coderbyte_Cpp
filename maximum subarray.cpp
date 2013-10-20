//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// maximum subarray
#include <iostream>
// xinfeng zhou's code is not working
//Kadane's algorithm
using namespace std;

double maxSubarray(double A[], int len, int &i, int &j){
	double Tmax = A[0], Vmax = A[0];
	int begin_temp = 0;
	for(int k = 1; k < len; k++){
		if (Tmax < 0){
			Tmax =  A[k];
			begin_temp = k;
		}
		else{
			Tmax += A[k];
		}
		if (Tmax >= Vmax){
			Vmax = Tmax;
			j = k;
			i = begin_temp;
		}
	}
	return Vmax;
}

int main(){
	double A[] = {1.0, 2.0, -5.0, 4.0, -3.0, 2.0, 6.0, -5.0, -1.0};
	//double A[] = {1.0, 2.0, -5.0, -5.0};
	int i = 0, j = 0;
	double Vmax = maxSubarray(A, sizeof(A)/sizeof(A[1]), i, j);
	cout << i << endl;
	cout << j << endl;
	cout << Vmax << endl;
	return 0;
}


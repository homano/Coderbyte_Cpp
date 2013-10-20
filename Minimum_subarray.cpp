
// minimum subarray
#include <iostream>

//Kadane's algorithm
using namespace std;

double minSubarray(double A[], int len, int &i, int &j){
	double Tmin = A[0], Vmin = A[0];
	int begin_temp = 0;
	for(int k = 1; k < len; k++){
		if (Tmin > 0){
			Tmin =  A[k];
			begin_temp = k;
		}
		else{
			Tmin += A[k];
		}
		if (Tmin <= Vmin){
			Vmin = Tmin;
			j = k;
			i = begin_temp;
		}
	}
	return Vmin;
}

int main(){
	double A[] = {1.0, 2.0, -5.0, 4.0, -3.0, 2.0, 6.0, -5.0, -1.0};
	//double A[] = {1.0, 2.0, -5.0, -5.0};
	int i = 0, j = 0;
	double Vmin = minSubarray(A, sizeof(A)/sizeof(A[1]), i, j);
	cout << i << endl;
	cout << j << endl;
	cout << Vmin << endl;
	return 0;
}


#include<iostream>
#define n 10 
using namespace std;
template <typename T>
void sort(T A[])
{
	for(int i=0;i < n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j] > A[j+1]){
				T temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}
int main ()
{
	double A[10];
	float B[10];
	double C[10];
	for(int i = 0;i < 10 ;i++){
		cin >> A[i];
	}
	sort(A);
	for(int i=0;i<10;i++){
		cout << A[i]<<' ';
	}
}

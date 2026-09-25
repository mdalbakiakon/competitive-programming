#include<bits/stdc++.h>
using namespace std;

const int N = 10;
int arr2[N][N];

void change_val(){
	arr2[0][0] = 99;
}

// we must declare the size for the outter function
int sum(int arr[], int size){
	int sum = 0;
	arr[size-1] = 0;
	for(int i=0; i<size; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	// reference access vs copy access
	int arr[5] = {1,2,3,4,5};
	
	for(int n : arr){
		cout << n << " ";
	}
	cout << endl;

	for(int &n : arr){
		if(n == 5){
			n = 60;
		}
	}

	for(int n : arr){
		cout << n << " ";
	}
	cout << endl;

	int size = sizeof(arr)/sizeof(arr[0]);

	cout << sum(arr, size) << endl;

	cout << arr2[0][0] << endl;
	change_val();
	cout << arr2[0][0] << endl;

}
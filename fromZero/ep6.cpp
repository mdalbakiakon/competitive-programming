#include<bits/stdc++.h>
using namespace std;

// when we declare a global arr
// we must use the size declaration with constant
// by using const keyword
// global arr has more size than inside main
// think of 1e7 max 10^7 for competitive programming
const int n2 = 1e8;
int b[n2];

int main(){
	// int arr[10];
	// arr[11] = 1000;
	// cout << arr[11] << endl;

	// this is called segmentation fault it behaves randomly
	// if we use a memeory that is not allocated


	// 2D array

	int row, col;
	cin >> row >> col;

	int arr[row][col];

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin >> arr[i][j];
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	// limit of array size
	// inside main 10^5 size max to think of 
	// maybe in pc it will work fine for larger than 5 but 
	// for competitive manner we have to think that maximum size 1e5
	// the error is also called segmentation fault
	int n = 1e7;
	int a[n];

	a[n-1] = 2442;
	cout << a[n-1] << endl;
}
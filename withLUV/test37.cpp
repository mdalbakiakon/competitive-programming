#include<bits/stdc++.h>
using namespace std;

int main(){
	
	array<int, 4> arr;
	
	for(int i=0; i<4; i++){
		int num;
		cin >> num;
		arr[i] = num;
	}

	sort(arr.begin(), arr.end());

	int a_b_c = arr[3];
	int a_b = arr[0];
	int a_c = arr[1];
	int b_c = arr[2];

	int c = a_b_c - a_b;
	int b = a_b_c - a_c;
	int a = a_b_c - b_c;

	cout << a << " " << b << " " << c << endl;
}
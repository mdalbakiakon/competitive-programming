#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec = {1,2,5,6,2,1,5,4,10};
	cout << vec.size() << endl;

	int arr[9] = {1,2,5,6,2,1,5,4,10};
	cout << sizeof(arr) / sizeof(arr[0]) << endl;

	array<int, 9> arr2 = {1,2,5,6,2,1,5,4,10};
	cout << arr2.size() << endl;


}
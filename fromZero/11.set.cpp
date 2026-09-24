#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec = {1,2,5,6,2,1,5,4,10};
	cout << vec.size() << endl;

	int arr[9] = {1,2,5,6,2,1,5,4,10};
	cout << sizeof(arr) / sizeof(arr[0]) << endl;

	array<int, 9> arr2 = {1,2,5,6,2,1,5,4,10};
	cout << arr2.size() << endl;

	// set
	set<int> setA(arr, arr+9);
	for(int num : setA){
		cout << num << " ";
	}

	// erasing value
	setA.erase(10);
	cout << endl;

	for(int num : setA){
		cout << num << " ";
	}

	cout << endl;

	auto it = setA.find(50);
	if(it == setA.end()){
		cout << "not found" << endl;
	}else{
		cout << *it << endl;
	}

	cout << setA.count(5) << endl;
}
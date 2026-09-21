#include<bits/stdc++.h>
using namespace std;

int main(){
	// between two known
	cout << max(4, 6) << endl;
	cout << min(4, 6) << endl;

	// between more then 2 but know with using {}
	cout << max({4, 6, 7, 8, 9}) << endl;
	cout << min({4, 6, 7, 8, 9}) << endl;



	cout << endl;
	cout << endl;
	cout << endl;



	// collection based *max_element
	// std::arr
	array<int, 5> arr = {1, 2, 4, 99, 100};
	cout << *max_element(arr.begin(), arr.end()) << endl;


	// plain C-style array — no .begin()/.end() members
	int arr2[4] = {1, 2, 3, 4};
	cout << *max_element(begin(arr2), end(arr2)) << endl;
	// or this will work too
	cout << *max_element(arr2, arr2 + 4) << endl;



	// vector
	vector<int> vec = {234, 23, 231, 62};
	cout << *min_element(vec.begin(), vec.end()) << endl;


	// set
	set<int> mySet = {1, 2, 4};
	cout << *max_element(mySet.begin(), mySet.end()) << endl;
}
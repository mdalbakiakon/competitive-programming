#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> nums;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		nums.push_back(x);
	}

	int maximum = *max_element(nums.begin(), nums.end());

	int sum = 0;
	for(int i=0; i<n; i++){
		int need = maximum - nums[i];
		sum += need;
	}

	cout << sum << endl;
}
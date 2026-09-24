#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i=0; i<n; i++) cin >> arr[i];

	unordered_map<int, int> freq;
	for(int etr : arr) freq[etr]++;

	int count = 0;
	
	for(int i=0; i<n; i++){
		if(freq.count(arr[i] + 1) == 1 && freq[arr[i]+1] > 0){
			count++;
			freq[arr[i] + 1]--;
		}
	}
	
	cout << n - count << "\n";
}
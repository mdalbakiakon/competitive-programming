#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		map<int, int> freq;

		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			freq[abs(x - 2)]++;
		}

		int maximum = 0;
		for(auto &[key, val] : freq){
			maximum = max(maximum, val);
		}

		cout << maximum << endl;
	}
}
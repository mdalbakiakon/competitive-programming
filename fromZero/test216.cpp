#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		unordered_map<int, int> freq;

		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			freq[x]++;
		}

		int result = 0;

		for(auto &it : freq){
			result += it.second / 2;
		}

		cout << result << "\n";
	}
}
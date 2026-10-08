#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int t;
	cin >> t;

	while(t--){
		string keyboard;
		cin >> keyboard;

		unordered_map<char, int> dict;

		for(int i=0; i<26; i++) dict[keyboard[i]] = i;

		string main;
		cin >> main;

		int res = 0;

		for(int i=1; i<main.size(); i++){
			res += abs(dict[main[i]] - dict[main[i-1]]);
		}

		cout << res << "\n";
	}
}
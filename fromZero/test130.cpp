#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;
		unordered_map<char, int> freq;
		for(char &c : str) freq[c]++;

		if(freq['A'] > freq['B']) cout << "A\n";
		else cout << "B\n";
	}
}
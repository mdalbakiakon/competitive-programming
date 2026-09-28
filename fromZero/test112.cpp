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
		string s, t;
		cin >> s >> t;

		map<char, int> freqS;
		map<char, int> freqT;

		for(char &c : s) freqS[c]++;
		for(char &c : t) freqT[c]++;

		if(freqS == freqT) cout << "YES\n";
		else cout << "NO\n";	
	}
}
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
		string str;
		cin >> str;

		set<char> letter_set(str.begin(), str.end());
		cout << *letter_set.rbegin() - 96 << "\n";

	}

	// cout << (int)'z' - 96 << endl;
}
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

		set<char> char_set(str.begin(), str.end());

		if(char_set.size() == 1) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
			string sorted_str = str;
			sort(sorted_str.begin(), sorted_str.end());
			
			// If sorting gave the exact same string, reversing it is guaranteed to change it
			if(sorted_str == str) {
				reverse(sorted_str.begin(), sorted_str.end());
			}
			cout << sorted_str << "\n";
		}
	}
	return 0;
}

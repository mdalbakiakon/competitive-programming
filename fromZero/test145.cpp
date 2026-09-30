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

		string filter;
		filter.push_back(str[0]);

		for(int i=1; i<n; i++){
			if(str[i] != str[i-1]){
				filter.push_back(str[i]);
			}
		}

		unordered_set<char> char_set(filter.begin(), filter.end());

		if(char_set.size() != filter.size()) cout << "NO\n";
		else cout << "YES\n";
	}
}
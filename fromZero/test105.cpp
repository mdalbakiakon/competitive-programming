#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	string valid = "meow";

	while(t--){
		int n;
		string str;
		cin >> n >> str;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		unordered_set<char> uniqueChar;
		
		string filtered = "";

		for(char &c : str){
			if(uniqueChar.count(c) == 0){
				uniqueChar.insert(c);
				filtered.push_back(c);
			}
		}

		cout << (filtered == valid ? "YES\n" : "NO\n");
	}
}
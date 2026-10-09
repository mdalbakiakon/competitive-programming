#include<bits/stdc++.h>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_set<char> char_set;

	string main;
	cin >> main;

	int n=5;
	while(n--){
		string str;
		cin >> str;
		char_set.insert(str[0]);
		char_set.insert(str[1]);
	}

	for(int i=0; i<2; i++){
		if (char_set.count(main[i]) == 1) {
			cout << "YES\n"; 
			return 0;
		}
	}

	cout << "NO\n";
}
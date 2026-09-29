#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int t;
	cin >> t;

	while(t--){
		unordered_set<char> seen;
		int n;
		cin >> n;

		string str;
		cin >> str;

		int ballon = 0;

		for(int i=0; i<str.size(); i++){
			if(seen.count(str[i]) == 0){
				ballon += 2;
				seen.insert(str[i]);
			}else{
				ballon++;
			}
		}

		cout << ballon << "\n";
	}
}
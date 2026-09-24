#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	unordered_set<string> name;

	while(t--){
		string n;
		cin >> n;
		if(name.count(n) == 0){
			cout << "NO\n";
			name.insert(n);
		}else{
			cout << "YES\n";
		}
	}
}
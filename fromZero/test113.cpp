#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		unordered_set<int> set_num;
		int iter = 4;
		while(iter--){
			int n;
			cin >> n;
			set_num.insert(n);
		}
		if(set_num.size() == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}
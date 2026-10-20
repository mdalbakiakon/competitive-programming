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

		set<int> set_num;
		while(n--){
			int x;
			cin >> x;
			set_num.insert(x);
		}

		cout << set_num.size() << "\n";
	}
}
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

		unordered_map<int, int> cnt;
		for(int i = 0; i < n; i++){
			int num;
			cin >> num;
			cnt[num]++;
		}

		if(cnt.size() > 2){
			cout << "NO\n";
		}else if(cnt.size() == 1){
			cout << "YES\n";
		}else{
			int x = cnt.begin()->second;
			int y = next(cnt.begin())->second;
			cout << (abs(x - y) <= 1 ? "YES\n" : "NO\n");
		}
	}
}
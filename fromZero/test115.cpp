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
		vector<int> vec(n);

		for(int &v : vec) cin >> v;
		int ok = 1;

		sort(vec.begin(), vec.end());

		for(int i=0; i<n-1; i++){
			if(vec[i] == vec[i+1]){
				ok = 0;
				break;
			}
		}

		cout << (ok == 1 ? "YES\n" : "NO\n");
	}
}
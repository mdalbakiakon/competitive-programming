#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int t;
	cin >> t;

	while(t--){
		int n, d;
		cin >> n >> d;

		vector<int> vec(n);
		
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			vec.push_back(x);
		}

		sort(vec.begin(), vec.end());

		if(vec[n-1] <= d) cout << "YES\n";
		else if(vec[0] + vec[1] <= d) cout << "YES\n";
		else cout << "NO\n";
	}
}
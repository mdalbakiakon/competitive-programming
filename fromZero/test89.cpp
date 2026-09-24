#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> vec(n);
		for(int &v : vec) cin >> v;

		int l = 0;
		int r = 1;

		while(l != n){
			int suml = 0;
			int sumr = 0;

			for(int i=l; i<n; i=i+2){
				suml += vec[i];
			}
			for(int i=r; i<n; i=i+2){
				sumr += vec[i];
			}

			if(suml == sumr){
				cout << "YES\n";
			}
			l+=2;
		}

		cout << "NO\n";

	}
}
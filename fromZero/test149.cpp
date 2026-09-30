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
		vector<vector<int>> vec(n, vector<int>(n, 1));

		for(int i=2; i<n; i++){
			for(int j=1; j<i; j++){
				vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
			}
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				cout << vec[i][j] << " ";
			}
			cout << "\n";
		}
	}
}
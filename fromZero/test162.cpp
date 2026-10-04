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

		char arr[2][n];
		for(int i=0; i<2; i++){
			for(int j=0; j<n; j++){
				char c;
				cin >> c;
				if(c == 'G') arr[i][j] = 'B';
				else arr[i][j] = c;
			}
		}

		int ok = 1;

		for(int i=0; i<n; i++){
			if(arr[0][i] != arr[1][i]){
				ok = 0;
				break;
			}
		}

		cout << (ok == 1 ? "YES\n" : "NO\n"); 
	}

}
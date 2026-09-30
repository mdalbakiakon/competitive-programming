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

		char arr[n][4];
		for(int i=0; i<n; i++){
			for(int j=0; j<4; j++){
				cin >> arr[i][j];
			}
		}

		vector<int> finds;

		for(int i=n-1; i>=0; i--){
			for(int j=0; j<4; j++){
				if(arr[i][j] == '#') finds.push_back(j+1);
			}
		}

		for(int &i : finds) cout << i << " ";
		cout << "\n";
	}
}
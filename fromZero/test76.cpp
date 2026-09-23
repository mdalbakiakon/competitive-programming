#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int g_price, p_price;
		cin >> g_price >> p_price;

		int max_price = max(g_price, p_price);
		int min_price = min(g_price, p_price);

		int n;
		cin >> n;

		int arr[n][2];

		for(int i=0; i<n; i++){
			for(int j=0; j<2; j++){
				cin >> arr[i][j];
			}
		}

		int f_solved = 0;
		int s_solved = 0;
		
		for(int i=0; i<n; i++){
			if(arr[i][0] == 1){
				f_solved++;
			}if(arr[i][1] == 1){
				s_solved++;
			}
		}

		int min_which = min(f_solved, s_solved);
		int max_which = max(f_solved, s_solved);

		int cost = (min_which * max_price) + (max_which * min_price);
		cout << cost << "\n";

	}
}
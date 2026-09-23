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

		vector<string> vec(n);

		for(int i=0; i<n; i++){
			cin >> vec[i];
		}

		int sym = 1;

		// top-bottom mirror -> symmetric about X-axis
		{
			int start = 0, end = n-1;
			while(start < end){
				for(int j=0; j<n; j++){
					if(vec[start][j] != vec[end][j]){
						sym = 0;
						break;
					}
				}
				start++;
				end--;
			}
		}

		// left-right mirror -> symmetric about Y-axis (only check if still symmetric)
		if(sym){
			int start = 0, end = n-1;
			while(start < end){
				for(int i=0; i<n; i++){
					if(vec[i][start] != vec[i][end]){
						sym = 0;
						break;
					}
				}
				start++;
				end--;
			}
		}

		cout << (sym == 1 ? "YES\n" : "NO\n");
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		int ans = 0;
		int cnt = 0;
		int i = 0;

		while(i < n){
			if(a[i] == 1){
				cnt = 0;
				i++;
			} else {
				cnt++;
				i++;

				if(cnt == k){
					ans++;
					cnt = 0;
					i++;
				}
			}
		}

		cout << ans << "\n";
	}

	return 0;
}
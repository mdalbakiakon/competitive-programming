#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n, x;
		cin >> n >> x;

		if(n <= 2) cout << 1 << "\n";
		else{
			int floor = 2;
			int max_num = ((floor - 1) * x + 2);
			while(max_num<n){
				floor++;
				max_num = ((floor - 1) * x + 2);
			}
			cout << floor << "\n";
		}
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		if(n < 0) n = -n;   // symmetric, since you can go both directions

		if(n == 0){
			cout << 0 << "\n";
		}else if(n == 1){
			cout << 2 << "\n";
		}else{
			cout << (n + 2) / 3 << "\n";
		}
	}
}
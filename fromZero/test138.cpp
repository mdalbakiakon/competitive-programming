#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n, a, b;
		cin >> n >> a >> b;
		if((b/2) < a){
			int cost_off = (n/2)*b;
			int rem = (n%2)*a;
			cout << cost_off + rem << "\n";
		}else{
			cout << n*a << "\n";
		}
	}
}
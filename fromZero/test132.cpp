#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int a, b;
		cin >> a >> b;
		int s = min(a, b);
		int m = max(a, b);
		int side = max(2*s, m);
		cout << side * side << "\n";
	}
}
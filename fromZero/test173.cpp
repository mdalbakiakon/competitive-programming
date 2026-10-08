#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	if(n == min({n, m, k})) cout << "Yes\n";
	else cout << "No\n";
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int possible = 0;

	while(n--){
		int num;
		cin >> num;
		if((5-num) >= k) possible++;
	}

	cout << possible/3 << "\n";
}
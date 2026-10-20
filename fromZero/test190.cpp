#include<bits/stdc++.h>
using namespace std;

int digit(int n){
	int x = abs(n);
	if(x==0) return 1;
	else return floor(log10(x) + 1);
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int power = digit(n) - 1;
		cout << n - (int)pow(10, power) << "\n";
	}
}
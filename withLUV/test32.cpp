#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int total_slice = c * d;
	int total_drink = k * l;
	int total_salt = p;

	int toast_count = 0;

	while(total_slice > 0 && total_drink > 0 && total_salt > 0){
		total_slice-=1;
		total_drink-=nl;
		total_salt-=np;
		toast_count += 1;
	}

	cout << toast_count/n << endl;
}
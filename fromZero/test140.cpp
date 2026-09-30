#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int find_dvd_4 = n/4;
		int rem = n%4;
		cout << find_dvd_4 + rem/2 << "\n";
	}
}
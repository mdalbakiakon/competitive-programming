#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int cap = 0;
	int max_cap = 0;

	while(t--){
		int a, b;
		cin >> a >> b;
		cap = cap - a;
		cap = cap + b;
		if(max_cap < cap){
			max_cap = cap;
		}
	}

	cout << max_cap << endl;
}
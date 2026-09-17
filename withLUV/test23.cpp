#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	int free = 0;

	while(t--){
		int p, q;
		cin >> p >> q;
		if((q-p)>=2){
			free += 1;
		}
	}

	cout << free << endl;
}
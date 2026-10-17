#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;

		int n = str.size();
		bool found = false;

		for(int i = 0; i < n - 1; i++){
			if(str[i] == str[i+1]){
				found = true;
				break;
			}
		}

		if(found) cout << 1 << "\n";
		else cout << n << "\n";
	}
}
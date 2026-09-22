#include<bits/stdc++.h>
using namespace std;

int main(){
	string valid = "codeforces";
	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;

		int count = 0;

		for(int i=0; i<10; i++){
			if(str[i] != valid[i]){
				count++;
			}
		}

		cout << count << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;
		int a = str[0] - '0';
		int b = str[2] - '0';

		cout << a+b << "\n";
	}
}
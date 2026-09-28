#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	reverse(str.begin(), str.end());
	long long num = 0;

	int start = 0;

	for(int i=0; i<str.size(); i++){
		char c = str[i];
		int x = c - '0';
		num+= 1LL * x * pow(2, start);
		start++; 
	}

	cout << num << endl;
}
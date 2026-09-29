#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;

	string str;
	cin >> str;

	int total = 0;

	for(int i=0; i<str.size(); i++){
		if(str[i] == '1') total += a1;
		else if(str[i] == '2') total += a2;
		else if(str[i] == '3') total += a3;
		else if(str[i] == '4') total += a4;
	}

	cout << total << "\n";
}
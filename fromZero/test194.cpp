#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n;
	cin >> n;

	cout << n << "\n";

	stringstream ss;
	ss << hex << n;

	string str = ss.str();

	cout << str << endl;

}
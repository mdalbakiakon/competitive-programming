#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	
	stringstream ss(str);
	string item;

	while(ss >> item){
		transform(item.begin(), item.end(), item.begin(), ::toupper);
		cout << item << endl;
	}

	cout << 'c' << endl;
	cout << (char)('c' - 32) << endl;
}
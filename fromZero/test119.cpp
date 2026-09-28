#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s = "bangladesh";
	string t = "banxy";

	// so we need to find which char is not in present in s
	// count doesnt work in string so we need to use the find here
	for(char c : t){
		int pos = s.find(c);
		// -1 means the char not found
		if(pos == -1) cout << c << " ";
	}
}
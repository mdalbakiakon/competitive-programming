#include<bits/stdc++.h>
using namespace std;

int main(){
	string code = "codeforces";
	unordered_set<char> codeSet(code.begin(), code.end());
	int t;
	cin >> t;
	while(t--){
		char c;
		cin >> c;
		if(codeSet.count(c)==1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	map<char, int> ptn = {
		{'T', 4},
		{'C', 6},
		{'O', 8},
		{'D', 12},
		{'I', 20} 
	};

	int mark = 0;

	while(t--){
		string str;
		cin >> str;
		mark += ptn[str[0]];
	}

	cout << mark << "\n";
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	unordered_map<char, int> strMap = {{'a', 0}, {'b', 1}, {'c', 2}};

	while(t--){
		int inplace = 0;
		string given;
		cin >> given;

		for(int i=0; i<3; i++){
			char c = given[i];
			if(strMap[c] == i){
				inplace++;
			}
		}

		if(inplace<1){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}

	}
}
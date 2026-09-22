#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin, str);

	vector<char> unique;
	for(char c : str){
		if(c == '{' || c == ' ' || c == '}' || c == ','){
			continue;
		}
		unique.push_back(c);
	}

	unordered_set<char> setUnique(unique.begin(), unique.end());

	cout << setUnique.size() << endl;
}
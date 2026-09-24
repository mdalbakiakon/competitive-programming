#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string line;
	while(getline(cin, line)){
		if(line == "#") break;

		unordered_set<string> strSet;
		stringstream ss(line);
		string word;

		while(ss >> word) strSet.insert(word);
		cout << strSet.size() << "\n";
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	string name = "Timur";
	
	unordered_map<char, int> nameMap;
	for(char c : name){
		nameMap[c]++;
	}

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string str;
		cin >> str;

		int ok = 1;

		if(n != 5){
			ok = 0;
		}

		unordered_map<char, int> myMap = nameMap;

		for(int i=0; i<5; i++){
			if(myMap.count(str[i]) == 0){
				ok = 0;
				break;
			}else if(myMap[str[i]] < 1){
				ok = 0;
				break;
			}
			myMap[str[i]]--;
		}
	
		cout << (ok == 1 ? "YES" : "NO") << endl;
	}

}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	unordered_map<string, int> freq;

	while(n--){
		string str;
		cin >> str;

		if(freq.count(str) == 0){
			cout << "OK\n";
			freq.insert(make_pair(str, 1));
		}else{
			cout << str << freq[str] << "\n";
			freq[str]++;
		}
	}
}
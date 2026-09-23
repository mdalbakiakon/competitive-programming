#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;

		string filter;

		for(int i=0; i<str.size(); i=i+2){
			string sub = str.substr(i, 2);
			filter.push_back(sub[0]);
		}

		if(str.size()%2==0){
			filter.push_back(str[str.size()-1]);
		}

		cout << filter << "\n";
	}
}
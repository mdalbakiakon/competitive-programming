#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;
		reverse(str.begin(), str.end());
		string filter="";
		for(char &c : str){
			if(c == 'p') filter.push_back('q');
			else if(c == 'q') filter.push_back('p');
			else filter.push_back(c);
		}
		cout << filter << "\n";
	}
}
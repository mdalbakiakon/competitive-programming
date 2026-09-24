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

		if(str.size()%2!=0){
			cout << "NO\n";
		}else{
			int half_size = str.size()/2;
			string first_str = str.substr(0, half_size);
			string last_str = str.substr(half_size);

			if(first_str == last_str){
				cout << "YES\n";
			}else{
				cout << "NO\n";
			}
		}
	}
}
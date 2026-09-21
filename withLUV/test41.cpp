#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string str;
		cin >> str;

		transform(str.begin(), str.end(), str.begin(), ::tolower);

		string filter;

		for(int i=0; i<n-1; i++){
			if(str[i] == str[i+1]){
				continue;
			}else{
				filter.push_back(str[i]);
			}
		}

		filter.push_back(str[n-1]);

		if(filter == "meow"){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}

	}
}
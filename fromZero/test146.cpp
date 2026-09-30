#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string str;
		cin >> str;

		int count=0;
		for(int i=0; i<n; i++){
			if(str[i] == 'B'){
				break;
			}else count++;
		}
		for(int i=n-1; i>=0; i--){
			if(str[i] == 'B'){
				break;
			}else count++;
		}

		cout << n-count << "\n";
	}
}
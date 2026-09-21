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

		int start = 0;
		int end = n - 1;

		int len = n;

		while(start<end){
			if(str[start] == str[end]){
				break;
			}
			start++;
			end--;
			len -= 2;
		}

		cout << len << endl; 
	}
}
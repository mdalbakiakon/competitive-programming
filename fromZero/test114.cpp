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
		int start = 0;
		int end = n;

		int count = 0;
		while(start != n && end != 0){
			start++;
			end--;
			count++;
		}

		cout << count - 1 << "\n";
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		set<int> set_num;
		int n;
		cin >> n;

		while(n!=0){
			set_num.insert(n%10);
			n/=10;
		}

		cout << *set_num.begin() << "\n";
	}
}
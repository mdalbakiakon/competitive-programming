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

		set<int> num_set;
		int count = n;

		while(count--){
			int num;
			cin >> num;
			num_set.insert(num);
		}
		
		cout << *num_set.rbegin() * n << "\n";
	}
}
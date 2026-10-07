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

		set<long long> num_set;

		while(n--){ 
			long long num;
			cin >> num;
			num_set.insert(num);
		}

		if (num_set.size() == 1){
			cout << 1 << "\n";
		}else{
			cout << *num_set.rbegin() - *num_set.begin() + 1 << "\n";
		}
	}
}
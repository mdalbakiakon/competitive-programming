#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n;
	cin >> n;

	unordered_set<int> set_num;

	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			set_num.insert(i);
			set_num.insert(n/i);
		}
	}

	cout << set_num.size() - 1 << "\n";
}
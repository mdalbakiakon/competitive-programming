#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int q;
	cin >> q;

	set<int> mySet;

	while(q--){
		int y, x;
		cin >> y >> x;

		if(y==1){
			mySet.insert(x);
		}else if(y==2){
			mySet.erase(x);
		}else if(y==3){
			if(mySet.count(x) == 1) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}
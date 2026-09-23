#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		set<int> mySet;
		for(int i=0; i<n; i++) {
    		int x;
    		cin >> x;
    		mySet.insert(x);
		}
		int minimum = *mySet.begin();
		cout << max(0, k - minimum) << "\n";
	}
}
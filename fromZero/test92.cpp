#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int a;
	cin >> a;
	set<int> setA;

	while(a--){
		int col;
		cin >> col;
		setA.insert(col);
	}

	int b;
	cin >> b;
	vector<int> setB;

	while(b--){
		int col;
		cin >> col;
		setB.push_back(col);
	}


	for(int n : setB){
		if(setA.count(n) == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}
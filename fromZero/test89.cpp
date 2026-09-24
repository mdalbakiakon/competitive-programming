#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	while(cin >> n >> m){  
		set<int> setA;
		set<int> setB;

		for(int i = 0; i < n; i++){
			int num;
			cin >> num;
			setA.insert(num);
		}

		for(int i = 0; i < m; i++){
			int num;
			cin >> num;
			setB.insert(num);
		}

		setA.insert(setB.begin(), setB.end());

		bool first = true;
		for(int x : setA){
			if(!first) cout << " ";
			cout << x;
			first = false;
		}
		cout << "\n";
	}
}
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		vector<int> vec(7);
		for(int &v : vec) cin >> v;

		sort(vec.begin(), vec.end());
		int sum = vec[6];
		for(int i=0; i<6; i++){
			sum+=(-vec[i]);
		}

		cout << sum << "\n";
	}
}
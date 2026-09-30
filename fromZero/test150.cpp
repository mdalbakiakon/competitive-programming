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

		unordered_map<int, int> num_map;
		
		while(n--){
			int num;
			cin >> num;
			num_map[num]++;
		}
		
		int cost;

		if(num_map[-1]%2!=0){
			cost = 2 + num_map[0]*1;
		}else{
			cost = num_map[0]*1;
		}

		cout << cost << "\n";
	}
}
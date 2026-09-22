#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> space;
		int find = 0;

		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			if(x == 0){
				find += 1;
			}else{
				space.push_back(find);
				find = 0;
			}
		}

		space.push_back(find);
		cout << *max_element(space.begin(), space.end()) << endl;
	}
}
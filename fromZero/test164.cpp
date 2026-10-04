#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		vector<int> vec(3);
		for(int &v : vec) cin >> v;

		for(int i = 0; i < 5; i++){
			(*min_element(vec.begin(), vec.end()))++;
		}

		cout << vec[0] * vec[1] * vec[2] << "\n";
	}
}
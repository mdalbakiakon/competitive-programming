#include<bits/stdc++.h>
using namespace std;


int main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int &v : vec) cin >> v;
	
	int curr_best = 1;
	int find = 1;

	for(int i=0; i<n-1; i++){
		if(vec[i+1] > vec[i]){
			find++;
			curr_best = max(curr_best, find);
		}else{
			find=1;
		}
	}

	cout << curr_best << "\n";
}
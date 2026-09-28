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
		vector<int> vec(n);
		for(int &v : vec) cin >> v;

		
		int notinplace = 0;
		int evenmiss = 0;
		int oddmiss = 0;
		for(int i=0; i<n; i++){
			if((i%2==0 && vec[i]%2!=0)){
				notinplace++;
				evenmiss++;
			}
			else if((i%2!=0 && vec[i]%2==0)){
				notinplace++;
				oddmiss++;
			}
		}

		if(evenmiss == oddmiss){
			cout << notinplace/2 << "\n";
		}else{
			cout << -1 << "\n";
		}
		
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];

		unordered_map<int, int> freq;
		for(int num : v){
			freq[num]++;
		}

		if(freq[0] < 2){
			cout << -1 << endl;
		}else{
			if(v[0] == 0 && v[n-1] == 0){
				cout << 0 << endl;
			}else if(v[0] == 1 && v[n-1] == 0){
				cout << 1 << endl;
			}else if(v[0] == 0 && v[n-1] == 1){
				cout << 1 << endl;
			}else{
				cout << 2 << endl;
			}
		}
	}
}
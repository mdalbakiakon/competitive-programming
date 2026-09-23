#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i=0; i<n-1; i++) cin >> vec[i];

		int end = n-2;
		bool very_first = 1;
		while(end>=0){
			if(very_first){
				if(vec[end] == 0){
					vec[n-1] = vec[end];
				}else if(vec[end] == 1){
					vec[n-1] = vec[end]+1;
				}else{
					vec[n-1] = vec[end]-1;
				}
				very_first = 0;
			}else{
				if(vec[end] == 0){
					vec[end] = vec[end+1];
				}else if(vec[end] == 1){
					vec[end] = vec[end+1] - 1;
				}else{
					vec[end] = vec[end+1] + 1;
				}
			}
			end--;
		}

		for(int i=0; i<n; i++) cout << vec[i] << " ";
		cout << "\n";
	}
}
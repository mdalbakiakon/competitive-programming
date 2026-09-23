#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i=0; i<n; i++) cin >> vec[i];

	set<int> vecSet;
	for(int i=0; i<n; i++) vecSet.insert(vec[i]);

	int max_val = *vecSet.rbegin();
	int min_val = *vecSet.begin();

	int max_idx = -1;
	int min_idx = -1;

	int count = 0;
	
	// min: scan right to left, take the rightmost occurrence
	for(int i=n-1; i>=0; i--){
		if(vec[i] == min_val){
			min_idx = i;
			break;
		}
	}


	for(int i=min_idx; i<n-1; i++){
		swap(vec[i], vec[i+1]);
		count++;
	}

	// max: scan left to right, take the leftmost occurrence
	for(int i=0; i<n; i++){
		if(vec[i] == max_val){
			max_idx = i;
			break;
		}
	}

	for(int i=max_idx; i>0; i--){
		swap(vec[i], vec[i-1]);
		count++;
	}

	cout << count << "\n";
}
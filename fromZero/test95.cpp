#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n);
	for(int &v : vec) cin >> v;

	int m;
	cin >> m;
	unordered_set<int> setM;
	while(m--){
		int num;
		cin >> num;
		setM.insert(num);
	}

	vector<int> not_found;
	for(int i=0; i<n; i++){
		if(setM.count(vec[i]) == 0){
			not_found.push_back(vec[i]);
		}
	}

	cout << not_found.size() << "\n";
	for(int i : not_found) cout << i << " ";
}
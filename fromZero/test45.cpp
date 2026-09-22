#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	vector<vector<int>> vec;

	while(t--){
		vector<int> temp;
		int a, b;
		cin >> a >> b;
		temp.push_back(a);
		temp.push_back(b);
		vec.push_back(temp);
	}

	int count = 0;

	for(int i=0; i<vec.size(); i++){
		for(int j=0; j<vec.size(); j++){
			if(i == j){
				continue;
			}

			if(vec[i][0] == vec[j][1]){
				count++;
			}
		}
	}

	cout << count << endl;
}
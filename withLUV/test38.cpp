#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		
		int len;
		cin >> len;

		vector<int> vec;

		while(len--){
			int num;
			cin >> num;
			vec.push_back(num);
		}

		unordered_map<int, int> freq;
		for(int x : vec){
			freq[x]++;
		}

		for(int i=0; i<vec.size(); i++){
			if(freq[vec[i]] == 1){
				cout << i+1 << endl;
				break;
			}
		}

	}
}
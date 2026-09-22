#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin >> t;

	while(t--){
		vector<int> racer(4);
		for(int i=0; i<4; i++) cin >> racer[i];

		int count = 0;

		for(int i=1; i<4; i++){
			if(racer[i] > racer[0]){
				count++;
			}
		}

		cout << count << "\n";
	}
}
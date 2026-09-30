#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int h, m;
		cin >> h >> m;
		
		int left_min = 60-m;
		h++;
		h = 24-h;
		int left = h*60 + left_min;
		cout << left << "\n";
	}
}
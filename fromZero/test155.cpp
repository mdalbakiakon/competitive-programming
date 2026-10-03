#include<bits/stdc++.h>
using namespace std;

int n = -1;

int loop(int &x, int &y){
	int count = 0;
	while(x > y){
		x -= n;
		y += n;
		count++;
	}
	return count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		n = c;
		int countmain = 0;
		if(a == b){
			cout << 0 << "\n";
			continue;
		}else{
			if(a > b){
				countmain = loop(a, b);
			}else{
				countmain = loop(b, a);
			}
		}

		cout << countmain << "\n";
	}
}
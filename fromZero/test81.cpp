#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int a, b;
		cin >> a >> b;
		int diff = abs(a-b);
		if(diff == 0){
			cout << 0 << "\n";
		}else{
			int need = diff/10;
			int rem = diff%10;
			if(rem == 0){
				cout << need << "\n"; 
			}else{
				cout << need + 1 << "\n";
			}
		}
	}
}
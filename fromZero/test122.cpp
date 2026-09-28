#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
	
		int mult = 1;
		
		while(n--){
			int num;
			cin >> num;
			mult *= num;
		}
		cout << ((mult%10==2 || mult%10==3 || mult%10==5) ? "YES\n" : "NO\n");
	}
}
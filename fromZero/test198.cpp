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

		set<int> st;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			st.insert(x);
		}

		int d = st.size();

		if((n - d) % 2 == 0) cout << d << "\n";
		else cout << d - 1 << "\n";
	}
}
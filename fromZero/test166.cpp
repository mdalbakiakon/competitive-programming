#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long t, total;
	cin >> t >> total;

	int dist = 0;

	while(t--){
		char c;
		cin >> c;
		
		long long x;
		cin >> x;

		if(c == '+') total+=x;
		else{
			if(x > total){
				dist++;
			}else{
				total-=x;
			}
		}
	}


	cout << total << " " << dist << "\n";

}
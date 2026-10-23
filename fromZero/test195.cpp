#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int x, y;
		cin >> x >> y;

		int screen = (y + 1) / 2;
		int blank = screen * 15 - y * 4;

		if(x > blank){
			int rest = x - blank;
			screen += (rest + 14) / 15;
		}

		cout << screen << "\n";
	}
	return 0;
}
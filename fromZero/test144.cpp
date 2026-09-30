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

		string str;
		cin >> str;

		int curr_pos_x = 0;
		int curr_pos_y = 0;
		int ok = 0;

		for(char &c : str){
			if(curr_pos_x == 1 && curr_pos_y == 1){
				ok = 1;
				break;
			}else{
				if(c == 'U') curr_pos_y++;
				else if(c == 'D') curr_pos_y--;
				else if(c == 'R') curr_pos_x++;
				else curr_pos_x--;
			}
		}
		if(curr_pos_x == 1 && curr_pos_y == 1){
			ok = 1;
		}
		cout << (ok == 1 ? "YES\n" : "NO\n");
	}
}
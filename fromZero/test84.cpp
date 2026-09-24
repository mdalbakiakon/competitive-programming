#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int a, b, c;
		cin >> a >> b >> c;

		char turn = 'a';
		char loser = ' ';

		while(true){
			if(turn == 'a'){
				if(a > 0) a--;
				else if(c > 0) c--;
				else { loser = 'a'; break; }
				turn = 'k';
			} else {
				if(b > 0) b--;
				else if(c > 0) c--;
				else { loser = 'k'; break; }
				turn = 'a';
			}
		}

		cout << (loser == 'a' ? "Second\n" : "First\n");
	}
}
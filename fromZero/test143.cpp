#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int row, col;
	cin >> row >> col;
	char arr[row][col];

	unordered_set<char> color_set;

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			char code;
			cin >> code;
			color_set.insert(code);
			arr[i][j] = code;
		}
	}

	// char x = arr[0][0];

	// if(x == 'W' || x == 'B') cout << "#Black&White\n";
	// else cout << "#Color\n";

	if( color_set.count('C')==1 || 
		color_set.count('M')==1 ||
		color_set.count('Y')==1) cout << "#Color\n";
	else cout << "#Black&White\n";
}
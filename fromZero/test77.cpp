#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5][5];
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> arr[i][j];
		}
	}

	int row;
	int col;
	int found = 0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(arr[i][j] == 1){
				row = i+1;
				col = j+1;
				found = 1;
				break;
			}
		}

		if(found == 1){
			break;
		}
	}

	cout << abs(3-row) + abs(3-col) << "\n";

}
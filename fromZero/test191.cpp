#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int t;
	cin >> t;

	int row = 3;

	while(t--){
		int col;
		cin >> col;

		string arr[row][col];
		unordered_map<string, int> freq;


		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				string str;
				cin >> str;
				arr[i][j] = str;
				freq[str]++;
			}
		}

		
		for(int i=0; i<row; i++){
			int sum_row = 0;
			
			for(int j=0; j<col; j++){
				if(freq[arr[i][j]] == 1) sum_row+=3;
				else if(freq[arr[i][j]] == 2) sum_row+=1;
			}

			cout << sum_row << " ";
		}

		cout << "\n";
	}
}